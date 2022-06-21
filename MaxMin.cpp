#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxNo = INT32_MIN;
    int minNo = INT32_MAX;
    int array[n];
    for(int i=0; i<=5; i++){
        cin>>array[i];
    }
    for(int i=0; i<=5; i++){
        maxNo = max(maxNo,array[i]);
    }
    for(int i=0; i<=5; i++){
        minNo = min(minNo,array[i]);
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
}
