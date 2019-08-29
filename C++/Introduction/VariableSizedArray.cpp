#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Variable Sized Array
/*
input: n q (n = number of arrays, q = number of queries)
next n lines: k a[i], a[i+1] ... a[k-1] (k = size of the array, a[i] = element of the array)
next q lines: i j (i = index of the array, j = index of the element in the ith array)
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector<int> vec[n];
    for (int i = 0; i < n; i++) {
        int len;
        cin >> len;
        for (int j = 0; j < len; j++) {
            int el;
            cin >> el;
            vec[i].push_back(el);
        }
    }

    for (int k = 0; k < q; k++) {
        int x;
        int y;
        cin >> x >> y;
        cout << vec[x][y] << endl;
    }
    return 0;
}

