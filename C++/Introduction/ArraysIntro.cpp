#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    int num;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++) {
        cin >> num;
        a[i] = num;
    }

    for (int j = 0; j < size; j++) {
        cout << a[size - 1 - j] << " ";
    }
    return 0;
}
