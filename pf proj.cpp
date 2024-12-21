#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_EMPLOYEES = 100; // Maximum number of employees
    struct Employee {
        string id;
        string name;
        float hourlyRate;
        int hoursWorked;
        float salary;
    };

    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice;

    do {
        cout << "\nUniversity Payroll System Menu\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Payroll\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
