/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int find_max(vector<int> a)
{
    int max = a[0];
    for( int i=1; i<a.size(); i++)
    {
        if(max<a[i]) max = a[i];
    }
    return max;
}


int find_min(vector<int> b)
{
    int min = b[0];
    for( int i=1; i<b.size(); i++)
    {
        if(min>b[i]) min = b[i];
    }
    return min;
}


int BCNN(vector<int> a)
{
    int max = find_max(a);
    int j=1;
    while(1)
    {
        int count = 0;
        for( int i=0; i<a.size(); i++)
        {
            if((max * j) % a[i] != 0) {j++;break;}
            else count ++;
        }
        if(count == a.size()) break;
    }
    return max*j;
}

int UCLN(vector<int> b)
{
    int min = find_min(b);
    int j = min;
    int dem = 0;
    for( int i=0; i<b.size(); i++)
    {
        if(b[i] % min != 0) break;
        else dem++;
    }
    if(dem == b.size()) return min;
    while(1)
    {
        int count = 0;
        for( int i=0; i<b.size(); i++)
        {
            if((b[i] % j) != 0) {j--; break;}
            else count++;
        }
        if(count == b.size()) break;
    }
    return j;
}

int dem_X(int BCNN, int UCLN)
{
    if(BCNN > UCLN) return 0;
    int dem = 0;
    int bcnn = BCNN;
    while(BCNN <= UCLN)
    {
        if(UCLN % BCNN == 0) dem++;
        BCNN+= bcnn;
    }
    return dem;
}



int main()
{
    vector<int> a, b;
    int N, M; cin >> N >> M;
    for( int i=0; i<N; i++)
    {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }
    for( int i=0; i<M; i++)
    {
        int tmp; cin >> tmp;
        b.push_back(tmp);
    }
    
    
    
    // int max_a = find_max(a);
    // cout << max_a << " " << BCNN(a) << " " << UCLN(a);
    cout << dem_X(BCNN(a), UCLN(b));
    return 0;
}
