#include <iostream>

using namespace std;

//defining the class Addition to overload the method sumOf() to explain the concept of Polymorphism
class Addition {

    public:
        int sumOf(int n1, int n2) {
            cout << "\nPerforming the addition operation on two integers and the value returned is: ";
            return n1 + n2;
        }
    int sumOf(int n1, int n2, int n3) {
        cout << "\nPerforming the addition operation on three integers and the value returned is: ";
        return n1 + n2 + n3;
    }
    int sumOf(int n1, int n2, int n3, int n4) {
        cout << "\nPerforming the addition operation on four integer values and the value returned is: ";
        return n1 + n2 + n3 + n4;
    }
};

//Defining the main method to access the members of the class
int main() {

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to explain the concept of Polymorphism, in CPP  ===== \n\n";

    Addition add; //Default constructor is called- which is not required to be written explicitly

    cout << add.sumOf(3, 5) << "\n\n";
    cout << add.sumOf(3, 5, 10) << "\n\n";
    cout << add.sumOf(3, 5, 7, 10) << "\n\n";

    cout << "\n\nExiting the main() method\n\n\n";

    return 0;
}
