#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b, i;
    string x[11] = {"even", "odd", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(i = a; i <= b; i++) {
        if ((i > 9) && (i%2 == 0)) cout << "even" << endl;
        else if((i > 9) && (i%2 != 0)) cout << "odd" << endl;
        else cout << x[i+1] << "\n";
    }
    return 0;
}