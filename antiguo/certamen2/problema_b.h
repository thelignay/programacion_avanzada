class Student {
    int scores[5];
    
    public:
    
    void input(){
        for(int i=0;i<5;i++){
            cin >> scores[i];
        }
    }
    int calculateTotalScore(){
        int result=0;
        for(int i=0;i<5;i++){
            result +=scores[i];
        }
        return result;
    }
};
//correcto a la primera