#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string emp_name;
    int emp_no;
    string qualification;
    string address;
    string contr_no;
    double basicSalary;
    double DA;
    double TA;

    // Default constructor
    Employee()
    {
        emp_name = "";
        emp_no = 0;
        qualification = "";
        address = "";
        contr_no = "";
        basicSalary = 0.0;
        DA = 0.0;
        TA = 0.0;
        cout << "Default constructor is called" << endl;
    }

    // Parameterized constructor to initialize member variables
    Employee(string emp_name, int emp_no, string qualification, string address, string contr_no, double basicSalary, double DA, double TA)
    {
        this->emp_name = emp_name;
        this->emp_no = emp_no;
        this->qualification = qualification;
        this->address = address;
        this->contr_no = contr_no;
        this->basicSalary = basicSalary;
        this->DA = DA;
        this->TA = TA;
        cout << "Parameterized constructor is called" << endl;
    }

    // Copy constructor
    Employee(const Employee& other)
    {
        emp_name = other.emp_name;
        emp_no = other.emp_no;
        qualification = other.qualification;
        address = other.address;
        contr_no = other.contr_no;
        basicSalary = other.basicSalary;
        DA = other.DA;
        TA = other.TA;
        cout << "Copy constructor is called" << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Destructor is called for " << emp_name << endl;
    }

    void getinfo()
    {
        cout << "Enter Employee name: ";
        cin >> emp_name;
        cout << "Enter Employee number: ";
        cin >> emp_no;
        cout << "Enter Employee qualification: ";
        cin >> qualification;
        cout << "Enter Employee address: ";
        cin >> address;
        cout << "Enter Employee contact number: ";
        cin >> contr_no;
        cout << "Enter Employee basic salary: ";
        cin >> basicSalary;
        cout << "Enter Employee DA: ";
        cin >> DA;
        cout << "Enter Employee TA: ";
        cin >> TA;
    }

    // Displaying information of the employee
    void display()
    {
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Number: " << emp_no << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contr_no << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "DA: " << DA << endl;
        cout << "TA: " << TA << endl;
    }
};

int main() {
    // Default constructor
    Employee emp1;
    emp1.getinfo();
    emp1.display();

    // Parameterized constructor
    Employee emp2("John Doe", 12345, "Bachelor's", "123 Main St", "555-1234", 5000.0, 1000.0, 500.0);
    emp2.getinfo();
    emp2.display();

    // Copy constructor
    Employee emp3 = emp2;
    emp3.display();

    return 0;
}



