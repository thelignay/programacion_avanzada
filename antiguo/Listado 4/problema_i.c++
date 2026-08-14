#include <iostream>
#include <string>

using namespace std;

class student {
    int age;
    string nombre;
    string apellido;
    int rank;

    public:
        void set_age(int anos){age = anos;};
        void set_first_name(string n){nombre = n;};
        void set_last_name(string a){apellido = a;};
        void set_standard(int r){rank=r;};

        int get_age(){return age;};
        string get_first_name(){return nombre;};
        string get_last_name(){return apellido;};
        int get_standard(){return rank;};

    void to_string(){
        cout << age << '\n';
        cout << apellido << ", " << nombre << '\n';
        cout << rank << '\n';
        cout << '\n';
        cout << age << ',' << nombre << ',' << apellido << ',' << rank;
    };
};

int main() {
    student s1;
    int anos;
    string nombre;
    string apellido;
    int rank;

    //obtencion de datos
    cin >> anos;//scanf pero deja el salto de linea
    cin.ignore();//borra el salto de linea del buffer
    getline(cin, nombre);//fgets
    getline(cin, apellido);
    cin >> rank;//scanf

    s1.set_age(anos);
    s1.set_first_name(nombre);
    s1.set_last_name(apellido);
    s1.set_standard(rank);  

    s1.to_string();//printf
    return 0;
}