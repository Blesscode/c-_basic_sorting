#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10],j,i,temp,min_index;
    //making array
    for(i=0;i<=5;i++){
        printf("enter elements of array\n");
        cin >> arr[i] ; //scanf(&a[i])
    }
    

     //displaying unsorted array
    cout<<"Elements of unsorted array are";
    for(i=0;i<=5;i++){
        cout<<arr[i];
    }
    
    //selection sort
    for(i=0;i<=5-1;i++){
        min_index=i;
        for(j=i+1;j<=5;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
           
    }

   //displaying sorted array
    cout<<"Elements of sorted array are";
    for(i=0;i<=5;i++){
        cout<<arr[i]<<endl;
        
    } 

}