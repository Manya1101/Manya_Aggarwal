#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int upperLimit = (n % 2 == 0) ? n - 1 : n;

    for (int i = 0; i < upperLimit; ++i) {
        cout << (2*i + 1);
        if (i != upperLimit - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
