#include<iostream>

using namespace std;

void In( string s){
    for( int i=0; i<(int)s.size(); i++){
        
        for( int j=0; j<(int)s.size(); j++){
            
            for( int k=0; k<(int)s.size(); k++){
                cout << s[i] << s[j] << s[k] << " ";
                
            }
        }
    }
}

int main(){
    string s = "abcd";
    In(s);
    return 0;
}