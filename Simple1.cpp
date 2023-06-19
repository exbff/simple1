#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    while (true) {
        
        int num1;
        int num2;
        string action;
        cout << "Введите первое число\n";
        cin >> num1;
        cout << "Введите второе число\n";
        cin >> num2;
        cout << "Введите действие\n";
        cin >> action;
        if (action == "+") {
            cout << num1 + num2, "\n";
            cout << "\n";
        }
        if (action == "-") {
            cout << num1 - num2, "\n";
            cout << "\n";
        }
        if (action == "*") {
            cout << num1 * num2, "\n";
            cout << "\n";
        }
        if (action == "/") {
            cout << num1 / num2, "\n";
            cout << "\n";
        }
        if (action != "+" and action != "-" and action != "*" and action != "/") {
            cout << "Неизвестное действие\n";
        }
    }
}
