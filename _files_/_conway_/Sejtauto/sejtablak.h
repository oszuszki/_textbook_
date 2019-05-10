
#ifndef SEJTABLAK_H
#define SEJTABLAK_H

#include <QtGui/QMainWindow>
#include <QPainter>
#include "sejtszal.h"

class SejtSzal;

class SejtAblak : public QMainWindow
{
    Q_OBJECT

public:
    SejtAblak(int szelesseg = 100, int magassag = 75, QWidget *parent = 0);
    ~SejtAblak();
    static const bool ELO = true;
    static const bool HALOTT = false;
    void vissza(int racsIndex);

protected:
    bool ***racsok;
    bool **racs;
    int racsIndex;
    int cellaSzelesseg;
    int cellaMagassag;
    int szelesseg;
    int magassag;    
    void paintEvent(QPaintEvent*);
    void siklo(bool **racs, int x, int y);
    void sikloKilovo(bool **racs, int x, int y);

private:
    SejtSzal* eletjatek;

};

#endif // SEJTABLAK_H

