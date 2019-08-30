#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; //Number of tags
    int q; //Number of queries
    cin >> n >> q;

    vector<string> v;
    for(int i = 0; i < n; i++) {
    	cout << v[i] << i;
    }

    string s = "";
    cin >> s;
    v.push_back(s);
    
    return 0;
}
