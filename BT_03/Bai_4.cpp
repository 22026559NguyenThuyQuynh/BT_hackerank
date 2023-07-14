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