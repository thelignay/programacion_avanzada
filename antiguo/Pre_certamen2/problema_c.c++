#include<bits/stdc++.h>
#include <iostream>

using namespace std;

class Box{
    int l, b, h;

    public:
    Box(){
        l=b=h=0;
    }
    Box(int largo, int ancho, int altura){
        l=largo;
        b=ancho;
        h=altura;
    }
    Box(const Box& caja_B){
        this->l=caja_B.l;
        this->b=caja_B.b;
        this->h=caja_B.h;
    }

    int getlength(){return l;}
    int getBreath(){return b;}
    int getHeight(){return h;}

    long long CalculateVolume(){
        long long volume;
        volume= l*b*h;
        return volume;
    }

    bool operator<(Box& caja_B){
        if(this->l < caja_B.l){return true;}
        if(this->b < caja_B.b && this->l==caja_B.l){return true;}
        if(this->h < caja_B.h && this->b==caja_B.b && this->l==caja_B.l){return true;}
        return false;
    }

    friend ostream& operator<<(ostream& out, const Box& caja_B){
        out << caja_B.l << ' ' << caja_B.b << ' ' << caja_B.h;
        return out;
    }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}