#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n; cin >> n;
    
    int a[n], b[n+1];
    
    for( int i=0; i<n; i++) cin >> a[i];
    
    for( int i=0; i<n+1; i++) cin >> b[i];
    
    int danh_dau[n+1]={0};
    
    for(int i=0; i<n+1; i++)
    {
        for( int j=0; j<n; j++)
        {
            if(b[i] == a[j]) danh_dau[i]++;
            
        }
        if(danh_dau[i] == 0) {cout << b[i];break;}
    }
    // for( int i=0; i<n+1; i++)
    // {
    //     if(danh_dau[i] == 0) {cout << b[i];break;}
    // }
    return 0;
}
