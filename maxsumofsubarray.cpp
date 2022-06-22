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

    //O(n3)
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int z=i; z<=j; z++){
                sum+=arr[z];
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum;




    //O(n2)
    int cursum[n+1];
    cursum[0] = 0;
    for(int i=1; i<=n; i++){
        cursum[i] = cursum[i-1] + arr[i-1];
    }

    int maxsum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = cursum[i] - cursum[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum;




   //O(n)
   int cursum = 0;
   int maxsum = INT_MIN;
   for(int i=0; i<n; i++){
    cursum+=arr[i];
    if(cursum<0){
        cursum = 0;
    }
    maxsum = max(cursum, maxsum);
   }
   cout<<maxsum;



    return 0;
}
