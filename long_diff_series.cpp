// longest different same size in the array

#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int prevdeff = INT_MIN;
    int currdeff;
    int count = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        currdeff = arr[i+1]-arr[i];
        if(currdeff==prevdeff){
            count++;
        }
        else{
            prevdeff=currdeff;
            count = 2;
        }
        ans = max(ans,count);
    }
    cout<<ans;
    return 0;
}
