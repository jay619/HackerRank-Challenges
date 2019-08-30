#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int age1) {
        age = age1;
    }

    void set_standard(int standard1) {
        standard = standard1;
    }

    void set_first_name(string first_name1) {
        first_name = first_name1;
    }

    void set_last_name(string last_name1) {
        last_name = last_name1;
    }

    int get_age() {
        return age;
    }

    int get_standard() {
        return standard;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    string to_string() {
        stringstream ss;
        string res;
        ss << get_age() << "," << get_first_name() << "," << get_last_name() << "," << get_standard();
        ss >> res;
        return res;
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

