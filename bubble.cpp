
/* 1. BUBBLE SORT */

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int arr[10],i,j,set,temp;

    //making array
    for(i=0;i<=5;i++){
        printf("enter elements of array\n");
        cin >> arr[i] ; //scanf(&a[i])
    }

    //displaying the unsorted array
    printf("The array is");
    for(i=0;i<=5;i++){
    printf("%d\t",arr[i]);
    }
    //soriting array
    for(j=0;j<=5-1;j++){       //loop for no of (n-1) element
        for(i=0;i<=5-j-1;i++){  // loop for deducing the length of array
        if(arr[i]>arr[i+1]){
            //swap
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        }
    }
    //dispalying the sorted array
    printf("The sorted array is:\n");
    for(i=0;i<=5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;    
}