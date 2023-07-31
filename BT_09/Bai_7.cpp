#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void In( string s){
    string s_even = "", s_odd = "";
    for( int i=0; i<(int)s.size(); i++){
        if(i%2== 0) s_even+=s[i];
        else s_odd += s[i];
    }
    cout << s_even << " " << s_odd << endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T; cin >> T;
    while( T-- ){
        string s; cin >> s;
        In(s);
    }
    return 0;
}
