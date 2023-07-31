#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N; cin >> N;
    map<string, string> m;
    while( N-- ){
        string name, num_phone; cin >> name >> num_phone;
        m[name] = num_phone;
    } 
    string n; 
    while(cin >> n){
        
        if( m.find(n) != m.end()){
            cout << n << "=" << m[n] << endl;
        }
        else cout << "Not found" << endl;
    }
    return 0;
}
