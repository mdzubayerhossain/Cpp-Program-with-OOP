#include <iostream>

using namespace std;

//Class Volume to demonstrate the concept of Friend Function in CPP
class Volume {
    //Member variables are declared as private and hence cannot be simply accessed from outside the class
    private:
        int liter;

    //Initializing the value of variable liter to 2 using the default constructor
    public:
        Volume(): liter(2) {}

    //Declaring the Friend Function for the class Volume
    friend int mulFive(Volume);
};

// Defining the Friend Function to be used by the Volume Class
int mulFive(Volume v) {
    //Friend function enables accessing private data from non-member function
    v.liter *= 5;
    return v.liter;
}

//Defining the main method to access the members of the class
int main() {

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the working of a Friend Function in CPP  ===== \n\n";

    //Declaring the Class objects to access the class members
    Volume vol;

    cout << "Volume after calling the Friend Function = " << mulFive(vol);

    cout << "\n\n\n";

    return 0;
}
