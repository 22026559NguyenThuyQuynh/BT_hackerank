#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void check(vector<int> v, int x)
{
    int i=0;
    for( i=0; i<v.size(); i++)
    {
        if(v[i] == x) {
                cout << "Yes " << i + 1 << endl;
                return ;
                
        }
        if( x!= v[i] && x>v[i] && x<v[i+1]) {cout << "No " << i+ 2 << endl;
        return ;
    }}
    // for(int j=0; j<v.size(); j++)
    // {
    //     if(v[j] > x){
    //         cout << "No " << j + 1 << endl;
    //         return ; 
    //     }
    // }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; cin >> N;
    vector<int> v;
    for( int i=0; i<N; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int queries; cin >> queries;
    vector<int> q;
    for(int i=0; i<queries; i++){
        int tmp; cin >>tmp;
        q.push_back(tmp);
    }
    
    for( int i=0; i<queries; i++)
    {
        check(v, q[i]);
    }
    return 0;
}
