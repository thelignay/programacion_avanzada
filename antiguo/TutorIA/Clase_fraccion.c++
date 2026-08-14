#include <iostream>
#include <cmath>
using namespace std;

class Fraccion {
    int numerador;
    int denominador;

    //mcd
    int get_mcd(int a, int b) const {
        if (b == 0) {
            return abs(a);
        }
        return get_mcd(b, a % b);
    }

    public:
    Fraccion() {
        numerador = 0;
        denominador = 1;
    }
    Fraccion(int num, int den) {
        if(den==0){
            cin<<"indeterminado"<<endl;
        }
        if (den < 0) {
            num = -num;
            den = -den;
        }
        numerador = num;
        denominador = den;
        
        this->simplificar();
    }

    //getters
    int getNumerador() const { return numerador; }
    int getDenominador() const { return denominador; }

    //metodos
    void simplificar() {
        int mcd = get_mcd(numerador, denominador);
        if (mcd != 0) {
            numerador = numerador / mcd;
            denominador = denominador / mcd;
        }
    }

    //Sobrecargas
    Fraccion operator+(const Fraccion& otro) const {
        Fraccion r;
        r.numerador = (this->numerador * otro.denominador) + (this->denominador * otro.numerador);
        r.denominador = this->denominador * otro.denominador;
        r.simplificar();
        return r;
    }
    bool operator==(const Fraccion& otro) const {
        return (this->numerador * otro.denominador == this->denominador * otro.numerador);
    }
    friend ostream& operator<<(ostream& out, const Fraccion& otro) {
        out << otro.numerador << '/' << otro.denominador;
        return out;
    }
};