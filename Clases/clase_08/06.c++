#include <utility>
#include <pair>
#include <string>
using namespace std;

int main(){
    pair<int,int> p1;
    p1.first=8;
    p1.second=10;
    pair <float,int> p2={5.8,7};
    pair<float,float> p3=make_pair(7.1,3.8);
    pair<int,pair<string,string>> p4=make_pair(8,make_pair(string("hola"),string("adios")));
}