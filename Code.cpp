#include <iostream>
using namespace std;

int main() 
{
 int age;
 double height;
 double weight;
 bool IsStudent;

    cout << "Enter Age: ";
    if (!(cin >> age)) {
        cout << "Invalid Age.\n";
        return 1;
    }
    cout << "Enter your Height in Meters.\n";
    if (!(cin >> height)) {
        cout << "Invalid Height.\n";
        return 1;
    }
    cout << "Enter your weight in Kg.\n";
    if (!(cin >> weight)) {
        cout << "Invalid Weight.\n";
        return 1;
    }
    cout << "Are you a student? (1 for yes 0 for no): \n";
    if (!(cin >> IsStudent)) {
        cout << "Invalid Input.";
        return 1;
    }
    double BMI;
    BMI = weight / (height * height);

    bool EligibleforStudentDiscount = ( age < 25 && IsStudent);
    bool Healthy = (BMI >= 18.5 && BMI <= 24.9);


    cout << "Age: " << age << "\n";
    cout << "Eligible for student discount: " << (EligibleforStudentDiscount ? "Yes" : "No") << ".\n";
    cout << "Healthy: " << (Healthy ? "Yes" : "No") << ".\n"; 
    
}
