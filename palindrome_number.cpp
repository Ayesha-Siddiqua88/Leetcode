#include<iostream>
int main(){
  class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0, r, temp;
        temp=x;

        while(x>0){
            r=x%10;
            sum=(sum*10)+r;
            x=x/10;
        }

        if(temp==sum){
            return true;
        }
        else{
            return false;
        }  
    }
}};
