/*2. INSERTION SORT */
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10],i,j,key;

    //crating an array
    for(i=0;i<=5;i++){
        cout<<"enter elem of array";
        cin>>arr[i];
    }

    //displaying unsorted array
    cout<<"Elements of unsorted array are";
    for(i=0;i<=5;i++){
        cout << arr[i]<<endl;
    }

    //insertion sort
    // adjacent item swap ,in one go whole swap
    for(i=1;i<=5;i++){                                 
        key=arr[i]; 
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        
       arr[j+1]=key;
    }
    
    //displaying sorted array
    cout<<"Elements of unsorted array are";
    for(i=0;i<=5;i++){
        cout<<arr[i]<<endl;
    }
}