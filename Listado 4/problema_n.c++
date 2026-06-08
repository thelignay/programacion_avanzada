#include <iostream>
#include <string>

using namespace std;

class Complex {
private:
    int real;
    int complejo;

public:
    int a, b;

    void input(string s) {
        int v1 = 0;
        size_t i = 0;
        
        while (s[i] != '+') {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
            i++;
        }
        int v2 = 0;
        while (i < s.size()) {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }

    Complex() {
        real = 0;
        complejo = 0;
        a = 0;
        b = 0;
    }

    Complex(int r, int c) {
        real = r;
        complejo = c;
        a = r;
        b = c;
    }

    Complex operator+(const Complex& c) const {
        Complex resultado;
        resultado.a = this->a + c.a;
        resultado.b = this->b + c.b;
        resultado.real = resultado.a;
        resultado.complejo = resultado.b;
        return resultado;
    }


    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.a << "+i" << c.b; 
        return out;
    }
};

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
