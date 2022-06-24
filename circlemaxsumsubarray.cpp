// circular max sum of sub array
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
   int cursum = 0;
   int maxsum = INT_MIN;
   for(int i=0; i<n; i++){
    cursum+=arr[i];
    if(cursum<0){
        cursum = 0;
    }
    maxsum = max(cursum, maxsum);
   }
   return maxsum;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int non_wrapsum;

    non_wrapsum = kadane(arr,n);
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum = totalsum + kadane(arr,n);

    cout<<max(wrapsum, non_wrapsum)<<endl;



    return 0;
}
