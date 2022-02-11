// ................................UNIQUE NUMBERS/DISTINCT NUMBERS
// https://leetcode.com/problems/search-in-rotated-sorted-array/
// COmplexit:-O(logn)
#include<iostream>
#include<vector>
using namespace std;

 int search(int nums[],int n, int target) {
     int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
           
            if(nums[mid]>=nums[low]){
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            else{
                if(target>=nums[mid] && target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
int main(){
    int nums[]={1,3};
    int target=3;
    int n=2;
    cout<<search(nums,n,target);
    return 0;
}