5#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // i. Declare variables
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    // Prompt user for details
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone (KES): ";
    cin >> pricePerPhone;

    // ii. Calculate total sales amount
    totalSales = quantity * pricePerPhone;

    // iii. Display formatted receipt
    cout << fixed << setprecision(2);
    cout << "\n==================================\n";
    cout << "      MOBILE PHONE SALES RECEIPT  \n";
    cout << "==================================\n";
    cout << left << setw(20) << "Customer Name:" << customerName << endl;
    cout << left << setw(20) << "Phone Model:" << phoneModel << endl;
    cout << left << setw(20) << "Quantity Bought:" << quantity << endl;
    cout << left << setw(20) << "Price Per Phone:" << "KES " << pricePerPhone << endl;
    cout << "----------------------------------\n";
    cout << left << setw(20) << "Total Sales Amount:" << "KES " << totalSales << endl;
    cout << "==================================\n";
    cout << "   Thank you for shopping with us!\n";

    return 0;
}
