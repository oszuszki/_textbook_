#include "frakablak.h"

FrakAblak::FrakAblak(double a, double b, double c, double d,
                     int szelesseg, int iteraciosHatar, QWidget *parent)
                         : QMainWindow(parent)
{
    setWindowTitle("Mandelbrot halmaz");

    int magassag = (int)(szelesseg * ((d-c)/(b-a)));

    setFixedSize(QSize(szelesseg, magassag));
    fraktal= new QImage(szelesseg, magassag, QImage::Format_RGB32);

    mandelbrot = new FrakSzal(a, b, c, d, szelesseg, magassag, iteraciosHatar, this);
    mandelbrot->start();

}

FrakAblak::~FrakAblak()
{
    delete fraktal;
    delete mandelbrot;
}

void FrakAblak::paintEvent(QPaintEvent*) {
    QPainter qpainter(this);
    qpainter.drawImage(0, 0, *fraktal);
    if(!szamitasFut) {
        qpainter.setPen(QPen(Qt::white, 1));
        qpainter.drawRect(x, y, mx, my);
        if(!zX.empty())
        {
            for(int i=0; i<zX.size(); i++)
            {
                qpainter.drawLine(zX[i],zY[i],zX2[i],zY2[i]);
            }
 
        }
 
    }
    qpainter.end();
}
 
void FrakAblak::mousePressEvent(QMouseEvent* event) {
 
    if(event->button() == Qt::LeftButton)
    {
    x = event->x();
    y = event->y();
    mx = 0;
    my = 0;
    }
    else if(event->button() == Qt::RightButton)
    {
               double dx = (b-a)/szelesseg;
               double dy = (d-c)/magassag;
               double reC, imC, reZ, imZ, ujreZ, ujimZ;
 
               int iteracio = 0;
 
               reC = a+event->x()*dx;
               imC = d-event->y()*dy;
 
               reZ = 0;
               imZ = 0;
               iteracio = 0;
 
               while(reZ*reZ + imZ*imZ < 4 && iteracio < 255) {
                   ujreZ = reZ*reZ - imZ*imZ + reC;
                   ujimZ = 2*reZ*imZ + imC;
                   zX.push_back((int)((reZ - a)/dx));
                   zY.push_back( (int)((d - imZ)/dy));
                   zX2.push_back((int)((ujreZ - a)/dx));
                   zY2.push_back((int)((d - ujimZ)/dy));
                   reZ = ujreZ;
                   imZ = ujimZ;
 
                   ++iteracio;
    }
    }
    update();
}