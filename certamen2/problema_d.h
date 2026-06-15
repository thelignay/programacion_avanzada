class Box{
    int l, b, h;

    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(int leght, int breadth, int height){
        l=leght;
        b=breadth;
        h=height;
    }
    Box(const Box& B){
        l=B.l;
        b=B.b;
        h=B.h;
    }

    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}

    long long CalculateVolume(){
        return (long long) l*b*h;
    }

    friend bool operator<(const Box& A, const Box& B){
        if(A.l < B.l){
            return true;
        }
        if(A.l==B.l && A.b < B.b){
            return true;
        }
        if(A.l == B.l && A.b == B.b && A.h < B.h){
            return true;
        }
        return false;
    }
    
    friend ostream& operator<<(ostream& out, const Box& B){
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};