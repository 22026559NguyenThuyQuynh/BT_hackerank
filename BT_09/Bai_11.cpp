/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string chuyen_10_2( int n){
    string s = "";
    while( n ){
        string a;
        a = to_string(n%2);
        s = a+s;
        n/=2;
    }
    return s;
}
int main()
{
    int N; cin >> N;
    string s = chuyen_10_2(N);
    // string s; cin >> s;
    int max_count = 1;
    int count = 1;
    for( int i=0; i<(int)s.size()-1; i++ ){
        if( s[i] == s[i+1]) {
            count ++;
            if(count > max_count ) max_count = count;
        }
        else{
            
            count = 1;
        }
    }
    cout << max_count << endl;
    
    //cout << chuyen_10_2(5);
    // int x = 1;
    // string a = to_string(x);
    // string b="123";
    // cout << a+b;
    return 0;
}
