// used binary search
#include<iostream>
int main(){
  class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return x;
        }
        int low=1, high=x;
        while(low<=high){
            int mid=low+high/2;

            if(mid==x/mid){
                return mid;
            }
            else if(mid>x/mid){
                high=mid-1;
            }
            else{
                low=low+1;
            }
        }
       return high;  
    }
}}
