Introduction
The Payroll System is a simple C++ program designed to manage payroll for employees. It allows the user to add employee details, calculate their salaries, and display a detailed payroll report. This system solves the problem of manual payroll calculations, providing an efficient and organized way to manage employee payment information.
Technologies Used
The project utilizes the following C++ concepts and libraries:
•	C++ Standard Library: Includes iostream for input/output operations and iomanip for formatting output.
•	String Handling: Utilizes the string class for storing and manipulating employee names and IDs.
•	Data Structures: Implements an array of structures to store employee details.
•	Control Structures: Uses loops (do-while and for) and conditional statements (if-else) for program flow control.
•	Input/Output Manipulation: Formats console output using setw and fixed from iomanip for neat tabular display.
Features
1.	Add Employee:
o	Input employee details such as ID, name, hourly rate, and hours worked.
o	Automatically calculates and stores the employee’s salary.
o	Prevents adding more employees once the maximum limit is reached.
2.	Display Payroll:
o	Displays all employee details in a formatted table.
o	Lists employee ID, name, hours worked, hourly rate, and calculated salary.
3.	Exit Program:
o	Allows the user to exit the program gracefully.
Code Explanation
High-Level Structure
1.	Employee Structure:
o	A struct named Employee defines the properties of each employee, including id, name, hourlyRate, hoursWorked, and salary.
2.	Main Function:
o	Initializes an array of Employee to store data for up to 100 employees.
o	Contains a menu-driven interface implemented using a do-while loop.
3.	Menu Options:
o	Add Employee:
	Checks if the maximum employee count has been reached.
	Prompts the user for employee details.
	Calculates and stores the salary.
o	Display Payroll:
	Formats and displays employee details in a tabular format.
	Outputs a message if no employees have been added.
o	Exit Program:
	Terminates the program when the user chooses to exit.
4.	Input Validation:
o	Includes basic validation to handle invalid menu options.
Key Functions and Operations
•	cin and getline: Used for input handling.
•	setw and setprecision: Used for formatting the output table.
•	Array indexing: Accesses and stores employee data efficiently.
Instructions
Compilation
To compile the program, use a C++ compiler like dev c++.
Running the Program
1.	Run the compiled executable:
2.	Follow the on-screen menu:
o	Select option 1 to add employees.
o	Select option 2 to view the payroll.
o	Select option 3 to exit the program.
3.	Provide the required inputs when prompted.
Example Workflow
1.	Add an employee by providing the ID, name, hourly rate, and hours worked.
2.	View the payroll to see the added employee details and calculated salary.
3.	Repeat the steps or exit the program.
