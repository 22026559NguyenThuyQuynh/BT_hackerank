// binary search

#include<iostream>

using namespace std;

// tim index cua val trong arr[]
int bin_search( int arr[], int N, int val ){
    int low = 0;
    int high = N;
    int mid = (low + high) / 2;
    do{
        if( arr[mid] == val ) return mid;
        else if( arr[mid] > val ){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else if( arr[mid] < val ){
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else if( low > high ) return -1;
    }while( arr[mid] != val );

    //return mid;
}

int main(){

    int size; cin >> size;
    int a[size];

    for( int i=0; i<size; i++){
        cin >> a[i];
    }

    int x; cin >> x;

    cout << bin_search( a, size, x);
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

string bin_search( int a[], int n, int val){
    string ans = "NO";
    int low = 0;
    int high = n-1;
    int mid ;//= (low + high)/2;
    while(high >= low){
         mid = (high + low)/2;
        if(a[mid] == val) {return "YES";}
        if(a[mid] > val){
            high = mid - 1;
           
        }
        else{
            low = mid + 1;
            
        }}
        // 
            
        
    
    //if( a[mid] == val) return "YES";
    return ans;
    
    
}

int main(){
    int N; cin >> N;
    int val; cin >> val;
    
    int a[N];
    
    for( int i=0; i<N; i++) {
       cin >> a[i];
    }
    cout << bin_search(a, N, val);
    
    
}

// binary search

#include<iostream>

using namespace std;

// tim index cua val trong arr[]
int bin_search( int arr[], int N, int val ){
    int low = 0;
    int high = N - 1;
    int mid = (low + high) / 2;
    do{
        if( arr[mid] == val ) break;
        else if( arr[mid] > val ){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        if( low > high ) {
            mid = -1;
            break;
        }
   }while( arr[mid] != val  );

    return mid;
}

int main(){

    int size; cin >> size;
    int a[size];

    for( int i=0; i<size; i++){
        cin >> a[i];
    }

    int x; cin >> x;

    cout << bin_search( a, size, x);
    return 0;
}