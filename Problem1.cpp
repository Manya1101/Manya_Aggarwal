#include <iostream>
#include <string>
using namespace std;

class Calculator {
    double num1, num2;

public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    double operate(const string& op) {
        if (op == "add") return num1 + num2;
        if (op == "subtract") return num1 - num2;
        if (op == "multiply") return num1 * num2;
        if (op == "divide") {
            if (num2 == 0) {
                cout << "Cannot divide by zero!" << endl;
                return 0;
            }
            return num1 / num2;
        }
        cout << "Unknown operation!" << endl;
        return 0;
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation (add/subtract/multiply/divide): ";
    cin >> op;

    Calculator calc(a, b);
    cout << "Result: " << calc.operate(op) << endl;

    return 0;
}
