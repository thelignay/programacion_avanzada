#include <iostream>

class student{
    int scores[5];

    public:
        void input(){
            for(int i=0;i<5;i++){
                std::cin >> scores[i];
            }
        };
        int calculateTotalScore(){
            int total=0;
            for(int i=0;i<5;i++){
                total+=scores[i];
            }
            return total;
        };
};

int main(){
    student s1;
    s1.input();
    std::cout << s1.calculateTotalScore() << '\n';
    return 0;
}