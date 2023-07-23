#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct diem{
    int s1, s2, s3, s4, s5;
    void nhap()
    {
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
    }
    int tong_diem()
    {
        return s1 + s2 + s3 + s4 + s5;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int N; cin >> N;
    diem hs[N];
    for( int i=0; i<N; i++)
    {
        hs[i].nhap();
    }
    
    int max = hs[0].tong_diem();
    
    int luu_diem[N-1];
    
    int count = 0;
    for( int i=1; i<N; i++){
        if(max < hs[i].tong_diem()) count++;
    }
    cout << count;
    
    return 0;
}
