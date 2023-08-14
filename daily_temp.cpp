#include<iostream>
int main(){

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
    stack <int>s;

    //creating vectore of temp size and initializing values for each index to zero
    vector<int>diff(temp.size(),0);

    //push the index of first temp
    s.push(0);

        for(int  i=1 ;i < temp.size(); i++)
        {

            //check the stack as it isn't empty
            while(!s.empty())
            {
               bool flag = false;

                //check if temp[i] warmer than the temp[i on top of the stack]
                // here temp[s.top()]=temp[0]=73   73<74
                if(temp[s.top()]<temp[i])
                   { 
                    diff[s.top()] = i-(s.top());
                    s.pop();
                    flag = true;
                   }

                    if(!flag || s.size()==0)
                    {
                        s.push(i);
                        break;
                    }
                    
            }

        }
        return diff;
    }
}
);
