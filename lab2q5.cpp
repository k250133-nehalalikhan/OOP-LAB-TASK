#include <iostream>
#include <string>
using namespace std;

struct EmployeeStruct {
    string name;
    int id;
};
class EmployeeClass {
private:
    string name;
    int id;

public:

    void setDetails(string n, int i) {
        name = n;
        id = i;
    }

    void getDetails() {
        cout << "Class - Name: " << name << ", ID: " << id << endl;
    }
};

int main() {

    EmployeeStruct emp1;
    emp1.name = "Alice";
    emp1.id = 501;
    cout << "Struct - Name: " << emp1.name << ", ID: " << emp1.id << endl;

    EmployeeClass emp2;
    emp2.setDetails("Bob", 502);
    emp2.getDetails();

    return 0;
}