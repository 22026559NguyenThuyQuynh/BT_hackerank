#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    string a1 = b[0] + a.substr(1);
    string b1 = a[0] + b.substr(1);
    cout << a1 << " " << b1;
    return 0;
}