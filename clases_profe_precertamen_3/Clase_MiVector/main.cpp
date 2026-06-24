#include "mivector.hpp"
using namespace std;

int main(){
    Mivector v;
    Punto3D p1(0.5,2.1,3.2);
    v.push_back(p1);
    cout<<v.gertIth(0)<<endl;
    return 0;
}