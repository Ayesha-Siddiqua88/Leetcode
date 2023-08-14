#include<iostream>
int main(){
  class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a=k%nums.size();

        // will reverse the whole array
        reverse(nums.begin(),nums.end());

        // will reverse the first a or k elements 
        reverse(nums.begin(),nums.begin()+a);

        // will reverse the remaining elements
        reverse(nums.begin()+a,nums.end());
        
    }
};
}
