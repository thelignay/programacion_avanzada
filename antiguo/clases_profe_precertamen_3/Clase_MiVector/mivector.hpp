#include <cmath>
#include <iostream>
#include <cassert>
using namespace std;

#define ERROR 1e-6
class Punto3D{
    double x,y,z;
    unsigned char color[3];

    public:
        Punto3D(): x(0), y(0), z(0){
            color[0]=0;color[1]=0;color[2]=0;
        }
        Punto3D(double xa, double ya , double za):// ':' mas eficiente que colocar x=xa y asi.
            x(xa), y(ya), z(za){
                color[0]=0; color[1]=0;color[2]=0;         
        }
        bool operator==(const Punto3D& otro)const{
            if(abs(otro.x - this->x)< ERROR and
            abs(otro.y - this->y)< ERROR and
            abs(otro.z - this->z)< ERROR and 
            otro.color[0] == this->color[0] and
            otro.color[1] == this->color[1] and
            otro.color[2] == this->color[2]) return true;
            else return false;
        }
        
        unsigned getSize(){return size;}

        bool operator<(const Punto3D& otro) const {
            if(this->x < otro.x + ERROR) return true;
            else if (abs(otro.x - this->x)< ERROR and
                    this->y < otro.y+ ERROR) return true;
            else if(abs(otro.x - this->x)< ERROR and
                    abs(otro.y - this->y)<ERROR and
                    this->z < otro.z+ERROR) return true;
            else return false;  
        }

        void sort(){
            for(int i=0;i<this->getSize()-1;++i){
                for(int j=i+1;j<this->getSize;++j){
                    if(v[j]<v[i]){
                        Punto3D aux = v[i];
                        v[i]=v[j];
                        v[j]=aux;
                    }
                }
            }
        }
        friend ostream& operator<<(ostream& out,const Punto3D& p);
};

ostream& operator<<(ostream& out,const Punto3D& p){
    out<< "(" << p.x <<","<< p.y << "," << p.z << ")[" << (int)p.color[0] <<","<<(int)p.color[1]<<","<<(int)p.color[2]<<"]";
    return out;
};

class Mivector{
    Punto3D* v;
    unsigned size;
    unsigned cap;

    void resize(){
        cap = cap*2
        Punto3D* tmp = new Punto3D[cap];
        for(int i=0;i<this->size;++i) tmp[i] = v[i];//el operador '=' se sobrecarga por defecto, por lo tanto se copia correctamente el objeto
        delete v;
        v = tmp;
    }

    public:
        Mivector(){
            size=0;
            cap=10;
            v= new Punto3D[cap];
        }

        void push_back(const Punto3D& p){
            if(size>=cap) resize();
            v[size]= P;
            size++;
        }

        Punto3D gertIth(int i){
            assert(i<size);
            return v[i];
        }

};