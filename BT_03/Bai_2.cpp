#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

// i           j           k
// 5           5           1
// 4           4           2
// 3           3           3
// 2           2           4
// 1           1           5
// 0           0           6



void staircase(int n) {
    for( int i=n-1; i>=0; i--)
    {
        for( int j=i; j>0;j--) cout << " ";
        for(int k=1; k<=n-i; k++) cout << "#";
        cout << endl;
        
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
