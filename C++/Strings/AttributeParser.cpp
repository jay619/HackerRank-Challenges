#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<string> const &input) {
    for (int i = 0; i < input.size(); i++) {
        cout << input.at(i) << ' ';
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int q;
    cin >> n >> q;
    vector<string> tags;
    vector<string> queries;

    for (int i = 0; i < n; i++) {
        string inp;
        cin >> inp;
        tags.push_back(inp);
    }

    print(tags);

    return 0;
}
