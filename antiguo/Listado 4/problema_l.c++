#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    vector<int> elements;
  
  	public:
  	    int maximumDifference=0;
        Difference(const vector<int>& a){
            elements = a;
            sort(elements.begin(),elements.end());
        }
        void computeDifference(){
            //menor elemento: front
            //mayor elemento: back
            maximumDifference= elements.back()- elements.front();
        }

};


int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}