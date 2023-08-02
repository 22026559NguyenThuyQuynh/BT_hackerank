#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void sort( vector<int> &arr, int n ){
    int count = 0;
    for( int i=0; i<n; i++){
        for( int j=i+1; j<n; j++ ){
            if(arr[i] > arr[j]){
                count ++;
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << "Array is sorted in " << count << " swaps.\n";
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n-1];
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    // Write your code here
    sort( a, n);
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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
#include<bits/stdc++.h>

using namespace std;

string loc( string s ){
    string a;
    for( int i=0; i<s.size(); i++){
        if( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] == ' ') a+=s[i];
    }
    return a;
}

string lower( string s){
    string w = "";
    for( int i=0; i<s.size(); i++){
        w += tolower(s[i]);
    }
    return w;
}

int main(){
    int T; cin >> T;
    while( T-- ){
        string s;
        cin.ignore();
        getline(cin, s);
        s = loc(s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while( ss >> word ){
            word = lower(word);
            if(word[0] >= 'a' && word[0] <= 'z'){
                word[0] = word[0] - 'a' +'A';
            }
            word = word[0] + word.substr(1);
            v.push_back(word);
        }
        for( int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        cout << lower(v[v.size()-1]);
        for( int i =0; i<v.size()-1; i++){
            // string b = v[i][0];
            // cout << lower(b);
            cout << (char)tolower(v[i][0]);
        }
        cout << "@gmail.com";
    }
    return 0;
}