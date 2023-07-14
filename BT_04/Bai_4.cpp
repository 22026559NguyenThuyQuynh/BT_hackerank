#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct day_so
{
    // int size;
    // int arr[];
    // void Nhap(){
    //     cin >> size;
    //     for( int i=0; i<size; i++) cin >> arr[i];
    // }
    
    // void In(int vi_tri){ 
    //     cout << arr[vi_tri];
    // }

    // Neu dung mang nhu tren se bi sai do arr[] chua so size
    
    int size;
    vector<int> v;
    void Nhap(){
        cin >> size;
        for( int i=0; i<size; i++) {
            int tmp ; cin >> tmp;
            v.push_back(tmp);
        }
    }
    
    void In(int vi_tri){ 
        cout << v[vi_tri] << endl;
    }
};

struct day_yeu_cau{
    int index, vi_tri;
    void nhap()
    {
        cin >> index >> vi_tri;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int so_day, so_yeu_cau;
    cin >> so_day >> so_yeu_cau;
    
    day_so ds[so_day];
    day_yeu_cau yc[so_yeu_cau];
    
    for( int i=0; i<so_day; i++) ds[i].Nhap();
    for( int i=0; i<so_yeu_cau; i++) yc[i].nhap();
    
    for( int i=0; i<so_yeu_cau; i++){
        ds[yc[i].index].In(yc[i].vi_tri);
    }
    
    return 0;
}