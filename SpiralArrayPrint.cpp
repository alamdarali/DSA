#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    int row_start = 0, row_end = n-1, colum_start = 0, colum_end = n-1;

    while(row_start <= row_end && colum_start <= colum_end){

        //for first row
        for(int i=colum_start; i<=colum_end; i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        //for last colum
        for(int i=row_start; i<=row_end; i++){
            cout<<arr[i][colum_end]<<" ";
        }
        colum_end--;

        //for last row
        for(int i=colum_end; i>=colum_start; i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //for first colum
        for(int i=row_end; i>=row_start; i--){
            cout<<arr[i][colum_start]<<" ";
        }
        colum_start++;
    }
    
    return 0;
}
