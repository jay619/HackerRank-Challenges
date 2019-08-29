#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++) {
        int el;
        cin >> el;
        v.push_back(el);
    }
    sort(v.begin(),v.end());
    for(int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    }
    return 0;
}
