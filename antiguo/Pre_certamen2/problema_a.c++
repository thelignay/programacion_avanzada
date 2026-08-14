#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    string first_name;
    string last_name;
    int standard;

    public:
    int get_age(){return age;}
    void set_age(int edad){age=edad;}
    string get_first_name(){return first_name;}
    void set_first_name(string nombre){first_name=nombre;}
    string get_last_name(){return last_name;}
    void set_last_name(string apellido){last_name=apellido;}
    int get_standard(){return standard;}
    void set_standard(int estandar){standard=estandar;}

    void to_string(){
        cout << age << ',' << first_name << ',' << last_name << ',' << standard << "\n";
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}