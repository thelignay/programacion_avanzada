#include <cmath>

class Punto3d{

    double x;
    double y;
    double z;
    unsigned char color[3];

    public:
        Punto3d(){
            x=0;y=0;z=0;
            color[0]=color[1]=color[2]=0;
        }
        double distancia_origen(){
            return sqrt(x*x + y*y + z*z);
        }
        double getx(){return x;}
        double gety(){return y;}
        double getz(){return z;}
        void setx(double xa){x=xa;}
        void sety(double ya){y=ya;}
        void setz(double za){z=za;}


};

int main(){
    Punto3d p1;
    p1.set(-1.14);
    Punto3d * p2=new Punto3d;
    printf("la distancia de p2 al origen es %lf\n", p2->distancia_origen());
    return 0;
}