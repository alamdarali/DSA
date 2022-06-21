#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(int array[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<=n; j++){
            if(array[i]>array[j]){
                int temp = 0;
                temp = array[i];
                array[i]= array[j];
                array[j]=temp;
            }
        }
    }
}

void bubblesort(int array[], int n){
    int counter = 1;
    while(counter<n){
        for(int i=0; i<=n-counter; i++){
        if(array[i]>array[i+1]){
            int temp = 0;
            temp = array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
            }
        }
        counter++;
    }   
}

void insertionsort(int array[], int n){
    for(int i=1; i<n; i++){
        int current = array[i];
        int j= i-1;
        while(array[j]>current && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=current;
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];
    };

    //selectionsort(array,n);
    //bubblesort(array,n);
    insertionsort(array, n);

    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
