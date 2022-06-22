// find the sub array thos sum are equal to key
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

    int key;
    cin>>key;
    
    for(int i=0; i<n; i++){
        int tot = 0;
        int flag = 0;
        for(int j=i; j<n; j++){
            tot = tot + arr[j];
            if(tot==key){
                cout<<i+1<<" "<<j+1<<endl;
                flag = 1;
                break;
            }       
        }    
        if(flag == 1){
            break;
        }
    }
    return 0;
}
