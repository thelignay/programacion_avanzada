#include <iostream>
#include <cmath>
using namespace std;

class Punto3d{
    dobule x,y,z;
    char color[3];
    public:
        Punto3d(){x=y=z=0;color[0]=color[1]=color[2]=0;}
        double getx(){return x;}
        double gety(){return y;}
        double getz(){return z;}
        double getcolor(){return color[];}
}

class Linea{
    Punto3d p1,p2;
    int grosor;
    char color[3];

    public:
        linea(){
            p1.x=0;
            p1.y=0;
            p1.z=0;
            color[0]=color[1]=color[2]=0;
        }

        double tam(const Punto3d& p1, const Punto3d& p2){
            double longitud;
            
        }

}