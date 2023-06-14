#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //Find the first peak  2 1 5 4 3 0 0
    //                       I
   int index=-1;
   for(int i=n-2;i>=0;i--){
       if(nums[i]<nums[i+1]){
           index=i;
           break;
       }
   }
   if(index==-1){
    reverse(nums.begin(),nums.end());
    return nums;
   }
  
  //                     2 1 5 4 3 0 0
  //                       I     N
  //                     2 3 5 4 1 0 0 
   
   int next_index=index+1;
   for(int j=n-1;j>index;j--){
       if(nums[j]>nums[index]){
           swap(nums[j],nums[index]);
           break;
       }
   }
  
  //     2 3 5 4 1 0 0 
  //     2 3 0 0 1 4 5

   reverse(nums.begin()+index+1,nums.end());
   return nums;

}
