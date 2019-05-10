public class MandelbrotIterációk implements Runnable{
    private int várakozás;
    private MandelbrotHalmazNagyító nagyító;
    private int j, k;
    private double a, b, c, d;
    private  int szélesség, magasság;
    private java.awt.image.BufferedImage kép;

    public MandelbrotIterációk(MandelbrotHalmazNagyító nagyító, int várakozás) {        
        this.nagyító = nagyító;
        this.várakozás = várakozás;
        j = nagyító.getY();
        k = nagyító.getX();
        a = nagyító.getA();
        b = nagyító.getB();
        c = nagyító.getC();
        d = nagyító.getD();
        kép = nagyító.kép();
        szélesség  = nagyító.getSz();
        magasság = nagyító.getM();
    }

    public void run() {
        double dx = (b-a)/szélesség;
        double dy = (d-c)/magasság;
        double reC, imC, reZ, imZ, ujreZ, ujimZ;
        int iteráció = 0;
        reC = a+k*dx;
        imC = d-j*dy;
        reZ = 0;
        imZ = 0;
        iteráció = 0;

        while(reZ*reZ + imZ*imZ < 4 && iteráció < 255) {
            ujreZ = reZ*reZ - imZ*imZ + reC;
            ujimZ = 2*reZ*imZ + imC;
            java.awt.Graphics g = kép.getGraphics();
            g.setColor(java.awt.Color.WHITE);
            g.drawLine(
                    (int)((reZ - a)/dx),
                    (int)((d - imZ)/dy),
                    (int)((ujreZ - a)/dx),
                    (int)((d - ujimZ)/dy)
                    );
            g.dispose();
            nagyító.repaint();
            
            reZ = ujreZ;
            imZ = ujimZ;
            
            ++iteráció;

            try {
                Thread.sleep(várakozás);
            } catch (InterruptedException e) {}
        }
    }    
}                  