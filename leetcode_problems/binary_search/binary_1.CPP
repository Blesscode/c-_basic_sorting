#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdio>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high_index,low_index,mid_index;
        int list_length=int(nums.size());
        high_index=list_len-1;
        low_index=0;
        //making list
        while(low_index<=high_index){
            mid_index=(high_index+low_index)/2;
            if(nums[mid_index] == target){
                return(low_index);
            }
            else{
                if(nums[mid_index] > target){
                    high_index=mid_index-1;
                }
                else{
                    low_index=mid_index+1;
                }
            }
        }
        
    }
};