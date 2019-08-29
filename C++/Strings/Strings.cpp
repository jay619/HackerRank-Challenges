#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
	string a;
	string b;
	cin >> a >> b;
	cout << a.size() << " " << b.size() << endl;
	cout << (a + b) << endl;
	char x = a[0];
	char y = b[0];
	a[0] = y;
	b[0] = x;
	cout << a << " " << b << endl;
  
    return 0;
}

