#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; cin >> N;
    vector<int> v;
    for( int i=0; i<N; i++)
    {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int index1; cin >> index1;
    int index2, index3;
    cin >> index2 >> index3;
    v.erase(v.begin() + index1 - 1);
    v.erase(v.begin() + index2 - 1, v.begin() + index3 - 1 );
    //cout << N - 1 - index3 + index2 << endl;
    cout << v.size() << endl;
    for( int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
