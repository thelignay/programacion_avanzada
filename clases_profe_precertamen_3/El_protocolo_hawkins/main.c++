#include <iostream>
#include <cstring>
using namespace std;

class Personaje{
    string nombre;
    string depto;
    string potenciador;
    string bando;
    public:
    void set_name(const string name){
        nombre=name;
    }
    void set_depto(const string departamento){
        depto=departamento;
    }
    void set_potenciador(const string poten){
        potenciador=poten;
    }
    void set_bando(const string band){
        bando=band;
    }
    bool dep_valido(const Personaje& p){
        deptos_validos[]={"Informatica", "Electronica", "Mecanica", "Fisica", "Quimica"};
        for(int i=0;i<5;++i){
            if(p.depto == dep_validos[i]){
                return true;
            }
        }
    }
    bool poten_valido(const Personaje& p){
        ponteciadores_validos[]={"Eggos", "BilzYPap"};
        for(int=0;i<2;++i){
            if(p.potenciador== potenciadores_validos[i];){
                return true;
            }
        }
    }

    Personaje operator==
};


int main(){
    int M, K;
    cin >> M >> K;
    
    int contador=0;
    for(int i=0;i<M;i++){
        Personaje p;
        cin >> p.set_name>>p.set_depto>>p.set_potenciador>>p.set_bando;
        if(p.dep_valido and p.poten_valido){
            
        }
    }
}