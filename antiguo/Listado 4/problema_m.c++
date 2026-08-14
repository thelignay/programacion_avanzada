#include <iostream>
using namespace std;

class Box{
    int l,b,h;

    public:
        Box(){
            l=0;b=0;h=0;
        }
        Box(int a, int c, int d){
            l=a;
            b=c;
            h=d;
        }
        Box(const Box& B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLeght(){return l;}
        int getBreadth(){return b;}
        int getHeight(){return h;}
        long long CalculateVolume(){return (long long)l*b*h;}

        //sobrecarga de operador < con sus respectivas condiciones
        bool operator<(Box& B){
            if(this->l< B.l){
                return true;
            }
            if(this->b< B.b && this->l==B.l){
                return true;
            }
            if(this->h< B.h && this->b==B.b && this->l==B.l){
                return true;
            }
            return false;
        }

        //sobrecarga de operador << se ocupa friend para acceder a las variables privadas y ostream "out" ocupado cunado se sobrecarga << lo que imprimira nuestras indicaciones
        friend ostream& operator<<(ostream& out, const Box& B){
            out << B.l << ' ' << B.b << ' ' << B.h;
            return out;
        }
};