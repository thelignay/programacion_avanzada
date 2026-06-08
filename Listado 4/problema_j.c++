#include <iostream>
#include <string>

using namespace std;

class person{
    int edad;

    public:
    
        person(int initialAge){
            if(initialAge<0){
                cout << "Age is not valid, setting age to 0.\n";
                edad=0;
            }
            else{
                edad=initialAge;
            }
        };
        void yearPasses(){
            edad=edad+3;
        };
        void amIOld(){
            if(edad<13){
                cout << "You are young.\n";
            }
            else if(edad>=13 && edad<18){
                cout << "You are a teenager.\n";
            }
            else{
                cout << "You are old.\n";
            }
        };
};

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int age;
        cin >> age;
        person p1(age);
        p1.amIOld();
        p1.yearPasses();
        p1.amIOld();
        cout << '\n';
    }
    return 0;
}