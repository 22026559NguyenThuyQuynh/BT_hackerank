// binary search

#include<iostream>

using namespace std;

// tim index cua val trong arr[]
int bin_search( int arr[], int N, int val ){
    int low = 0;
    int high = N;
    int mid = (low + high) / 2;
    do{
        if( arr[mid] == val ) break;
        else if( arr[mid] > val ){
            high = mid;
            mid = (low + high) / 2;
        }
        else if( arr[mid] < val ){
            low = mid;
            mid = (low + high) / 2;
        }
    }while( arr[mid] != val );

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