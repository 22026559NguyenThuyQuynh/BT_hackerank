#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Quiry{
    int q, val; // q là thứ yêu cầu, val là giá trị 
    
    void Nhap(){
        cin >> q >> val;
    }
    
    
};

void process( Quiry x, set<int> &s){
        
    
    if( x.q == 1){
        s.insert(x.val);
    }
    else if( x.q == 2 ){
        s.erase(x.val);
    }
    else if( x.q == 3 ){
        if( s.count(x.val) == 0) cout << "No"; // thay vif dùng find dùng sẽ return về 0 hoặc 1 -> dễ kiểm soát hơn
        else cout << "Yes";
        cout << endl;
    }
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int N; // so yeu cau
    cin >> N;
    
    Quiry a[N]; 
    
    for( int i=0; i<N; i++) a[i].Nhap();
    
    set<int> s;
    
    for( int i=0; i<N; i++){
        process(a[i], s);
    }
    
     
    return 0;
}
