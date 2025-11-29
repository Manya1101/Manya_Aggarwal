#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> multiples;

    for (int divisor = 1; divisor <= 9; ++divisor) {
        int count = 0;
        for (int num : numbers) {
            if (num % divisor == 0) count++;
        }
        multiples[divisor] = count;
    }

    cout << "{";
    for (auto it = multiples.begin(); it != multiples.end(); ++it) {
        cout << it->first << ": " << it->second;
        if (it->first != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
