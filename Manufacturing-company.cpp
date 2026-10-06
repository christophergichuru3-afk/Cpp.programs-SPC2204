/*
Name : Christopher gichuru 
Reg.no :CT101/G/29020/25
Description : Program to calculate a company's employees salaries 

  */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double RATE_PER_HOUR = 500.0; // KES per overtime hour

// i. Get employee details (passed by reference)
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary (KES): ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// ii. Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// iii. Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// iv. Display payslip
void displayPayslip(const string &name, double basicSalary,
                    double overtimeHours, double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n==================================\n";
    cout << "            PAYSLIP\n";
    cout << "==================================\n";
    cout << left << setw(20) << "Employee Name:" << name << endl;
    cout << left << setw(20) << "Basic Salary:" << "KES " << basicSalary << endl;
    cout << left << setw(20) << "Overtime Hours:" << overtimeHours << endl;
    cout << left << setw(20) << "Rate Per Hour:" << "KES " << RATE_PER_HOUR << endl;
    cout << left << setw(20) << "Overtime Pay:" << "KES " << overtimePay << endl;
    cout << "----------------------------------\n";
    cout << left << setw(20) << "Net Salary:" << "KES " << netSalary << endl;
    cout << "==================================\n";
}

// v. main calls everything in logical order
int main() {
    string name;
    double basicSalary, overtimeHours;

    getEmployeeDetails(name, basicSalary, overtimeHours);

    double overtimePay = calculateOvertimePay(overtimeHours, RATE_PER_HOUR);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}
