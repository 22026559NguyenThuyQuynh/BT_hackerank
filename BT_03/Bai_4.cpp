#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
 
 // so tu = so chu hoa co trong xau + 1
int camelcase(string s) {
    int dem_chu_hoa = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') dem_chu_hoa++;
    }
    return dem_chu_hoa+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}




// săp xep tang dan

#include<iostream>

using namespace std;

void swap( int &a, int &b)
{
    int tmp =a;
    a=b;
    b= tmp;
}

void in(int nam, int nu)
{
    for( int i = 1; i<=nam; i++)
    {
        for( int j=1; j<=nu; j++)
        {
            cout << "{ " << i << ", " << j << " }" << endl;
        }
    }
    
    
}

int bin_search(int n, int a[], int key)
{
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    while(a[mid]!=key)
    {
        if(key> a[mid]){
            low=mid;
            mid = (high+low)/2;
        }
        if(key<a[mid])
        {
            high = mid;
            mid = (high+low)/2;
        }
    }
    return mid;
}

int main()
{
    // int b, g;
    // cin >> b >> g;
    // in(b, g);
    
    int n; cin >> n;
    int a[n];
    for( int i=0; i<n; i++) cin >> a[i];
    int key; cin >>key;
    cout << bin_search(n, a, key);
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

void swap(double &a, double &b)
{
    double tmp = a;
    a=b;
    b=tmp;
}

double sort(int n, double a[])
{
    for( int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if(a[i]>a[j]) swap(a[i], a[j]);
        }
    }
    return a[n-1];
    
}


struct NhanVien
{
    int MSNV;
    string ten;
    int cong;
    int bac;
    double luong(int cong, int bac)
    {
        return cong * bac * 1.05;
    }

    void Nhap()
    {
        // cin.ignore();
        // getline(cin, MSNV);
        // cin.ignore();
        // getline(cin, ten);
        // cin >> cong >> bac;
        // cin.ignore();
        cin >> MSNV >>  cong >> bac;
        cin.ignore();
        getline(cin, ten);
        
    }
    
    void In()
    {
        cout << MSNV << " " << ten << " " << bac << " " << cong;
    }

    
};

int main()
{
    int n; cin >> n;
    NhanVien nv[n];
    double salary[n];
    for( int i=0; i<n; i++) nv[i].Nhap();
    //for( int i=0; i<n; i++) salary[i] = nv[i].luong;
    
    double max = nv[0].luong(nv[0].cong, nv[0].bac);
    for(int i=1; i<n; i++)
    {
        if(max < nv[i].luong(nv[i].cong, nv[i].bac)) max = nv[i].luong(nv[i].cong, nv[i].bac);
    }
    
    // cout << max << endl; 
    for(int i=0; i<n; i++)
    {
        if(max== nv[i].luong(nv[i].cong, nv[i].bac)) cout << nv[i].ten;
    }
    
    
    // for( int i=0; i<n; i++) {
    //     cout << nv[i].luong(nv[i].cong, nv[i].bac );
    // }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
 
 

int palindromeIndex(string s) {
    
    int count = 0;
    int N = s.size();
    for( int i=0; i<s.size(); i++ )
    {
        if( s[i] == s[s.size()-1-i] ) count ++;
    }
    if (count>=(s.size()/2)) return -1;
    
    vector<char> check;
    for( int i=0; i<s.size(); i++) {
        check.push_back(s[i]);
    }
    
    for( int i=0; i<s.size(); i++)
    {
        check.erase(check.begin() + i);
        int c = 0;
        for( int i=0; i<check.size(); i++)

        {
            if( check[i] == check[check.size()-1-i] ) c ++;
        }
        if (c>=(s.size()/2.0)) return i;
        else{
            check.insert(check.begin()+i, check[i]);
        }
                
        
    }
    
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

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

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int find_max(vector<int> a)
{
    int max = a[0];
    for( int i=1; i<a.size(); i++)
    {
        if(max < a[i]) max = a[i];
    }
    return max;
}

int find_min(vector<int> b)
{
    int min = b[0];
    for( int i=1; i<b.size(); i++)
    {
        if(min > b[i]) min = b[i];
    }
    return min;
}

int BCNN(vector<int> a)
{
    int boi_nho = find_min(vector<int> a);
    
    
}

int getTotalX(vector<int> a, vector<int> b) {
    int max_a = find_max(a);
    int min_b = find_min(b);
    int BCNN = 0;
    
    while(1)
    {
        BCNN += max_a;
        //int count = 0;
        for( int j=0; j<a.size(); j++)
        {
            if(BCNN % a[j] != 0) {break;}
        }
        //max_a = max_a * i;
        break;
    }
    
    int tang = BCNN;
    
    int count = 0;
    
    while(1)
    {
        for(int i=0; i<b.size(); i++)
        {
            if(b[i] % BCNN != 0) BCNN+=tang;
        }
        count++;
        BCNN +=tang;
        if(BCNN > min_b) break;
    }
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

    fout.close();

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
