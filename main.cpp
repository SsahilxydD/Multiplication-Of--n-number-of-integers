#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int sum = 1; // Initialize sum variable to 1 for multiplication

    cout << "Enter a number: ";
    cin >> n;
    system("cls");
    Sleep(500);

    while (i <= n)
    {
        cout << i << "  ";
        sum *= i; // Multiply current number with sum
        i = i + 1;
        Sleep(100);
    }

    cout << "\nProduct: " << sum << endl; // Display the product
    Sleep(1000);
}
