#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age, standard;
        string firstName, lastName;
        
    public:
        int get_age() {
            return age;
        }
        
        int get_standard(){
            return standard;
        }
        
        string get_first_name() {
            return firstName;
        }
        
        string get_last_name() {
            return lastName;
        }
    
    
        void set_age(int a) {
            age = a;
        }
        
        void set_standard(int s){
            standard = s;
        }
        
        void set_first_name(string fn) {
            firstName = fn;
        }
        
        void set_last_name(string ln) {
            lastName = ln;
        }
        
        string to_string() {
            return ::to_string(age) + "," + firstName + "," + lastName + "," + ::to_string(standard);
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
    cout << st.to_string();
    
    return 0;
}
