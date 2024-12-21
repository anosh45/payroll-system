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
        
         if (choice == 1) {
            if (employeeCount < MAX_EMPLOYEES) {
                cout << "Enter Employee ID: ";
                cin >> employees[employeeCount].id;
                cout << "Enter Employee Name: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, employees[employeeCount].name);
                cout << "Enter Hourly Rate: ";
                cin >> employees[employeeCount].hourlyRate;
                cout << "Enter Hours Worked: ";
                cin >> employees[employeeCount].hoursWorked;

                // Calculate salary
                employees[employeeCount].salary = employees[employeeCount].hourlyRate * employees[employeeCount].hoursWorked;
                employeeCount++;

                cout << "Employee added successfully!\n";
            } else {
                cout << "Cannot add more employees. Maximum limit reached.\n";
            }
        } else if (choice == 2) {
            if (employeeCount == 0) {
                cout << "No employees found. Please add employees first.\n";
            } else {
                cout << "\nUniversity Payroll System\n";
                cout << "-------------------------------------------\n";
                cout << left << setw(10) << "ID"
                     << setw(20) << "Name"
                     << setw(15) << "Hours Worked"
                     << setw(10) << "Hourly Rate"
                     << setw(10) << "Salary" << endl;
                cout << "-------------------------------------------\n";

