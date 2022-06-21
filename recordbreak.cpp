#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int mx = INT_MIN;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            count++;
        }
        mx = max(mx,arr[i]);
    }
    cout<<count<<endl;
    return 0;
}
