#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Define a class named Human
class Human {
    private:
        // Private member variables
        string occupation = "Student";
        long long roll_no = 123456789;

    public:
        // Public member variables
        string name;
        int age;
        double height;
        double weight;

    public:
        // Setters for the occupation and roll_no variables
        void setOccupation(string occupation) {
            this->occupation = occupation;
        }

        void setRollNo(long long roll_no) {
            this->roll_no = roll_no;
        }

        // Getter for the occupation variable
        string getOccupation() {
            return occupation;
        }

        // Getter for the roll_no variable
        long long getRollNo() {
            return roll_no;
        }

        // Constructor to initialize the Human object
        Human(string name, int age, double height, double weight) {
            this->name = name;
            this->age = age;
            this->height = height;
            this->weight = weight;
        }

        // Method to greet and introduce the Human object
        void greet() {
            cout << "Hello, my name is " << name << ". I am " << age << " years old." << endl;
        }
};

int main() {
    // Create two Human objects
    Human H1("Piyush", 20, 5.8, 70);
    Human H2("Anant", 19, 5.9, 75);

    // Call the greet method for H1
    H1.greet();

    // Print the height and weight of H1
    cout << "Height: " << H1.height << " feet" << endl;
    cout << "Weight: " << H1.weight << " kg" << endl;

    // Set the occupation and roll_no for H1
    H1.setOccupation("Engineer");
    H1.setRollNo(23013315310114);

    // Print the occupation and roll number of H1 using getters
    cout << "Occupation: " << H1.getOccupation() << endl;
    cout << "Roll No: " << H1.getRollNo() << endl;

    /*Here the roll no. and occupation is set by the setter method and call by the getters method*/
    /*Pls stick this in mind that the object values are set and cannot call by the setters method,
      setters method only works to make the change in the values of the object values not to call them
      this can only done by getters method*/

    return EXIT_SUCCESS;
}