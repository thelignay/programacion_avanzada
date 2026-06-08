#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
    //crear variables de nxm matrices para luego apuntar a las q nos dan en el main y sobrecargar el + con for i j
    //la matriz tiene que ir en publico por que se intenta modificar desde el main
    public:
    //se declara matriz con el nombre de la variable al final
    vector <vector<int>> a;

    Matrix operator+(const Matrix& b) const{
            Matrix result;

            int n = max(a.size(), b.a.size());
            int m = max(a[0].size(), b.a[0].size());

            result.a.resize(n, vector<int>(m, 0));

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    result.a[i][j] = a[i][j] + b.a[i][j];
                }
            }
            return result;
        }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}