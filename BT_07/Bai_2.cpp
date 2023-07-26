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



#include<bits/stdc++.h>

using namespace std;

string s;
int X[100];
int used[1000]={0};

void print(){
    for( int i=1; i<=(int)s.size(); i++){
        cout << s[X[i]];
    }
    cout << endl;
}

void Try( int i ){
    for( int j=0; j<(int)s.size(); j++){
        if(used[j] == 0){
            X[i] = j;
            used[j] = 1;
            if( i == (int)s.size() ) print();
            else Try(i+1);
            used[j] = 0;
        }
        
    }
}

int main(){
    cin >> s;
    Try(1);
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

int N;
int X[100];
int used[1000]={0};

void print(){
    for( int i=1; i<=N; i++){
        cout << X[i];
    }
    cout << endl;
}

void Try( int i ){
    for( int j=1; j<=N; j++){
        if(used[j] == 0){
            X[i] = j;
            used[j] = 1;
            if( i == N ) print();
            else Try(i+1);
            used[j] = 0;
        }
        
    }
}

int main(){
    cin >> N;
    Try(1);
    return 0;
}