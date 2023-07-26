
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int q, type, mark;
    string name;
    map<string,int> M;
    
    cin >> q;
    for( int i=0; i<q; i++ ) {
        cin >> type >> name;
        switch( type ) {
            case 1 : 
                cin >> mark;
                M[name] += mark; // cong mark cua name
                break;
            case 2 : 
                M.erase( name ); // xoa mark cua name
                break;
            case 3 : 
                cout << M[name] << endl; // in mark cua name
        }
    }
    return 0;    
}