//Given an array of integers nums and an integer target, 
//return indices of the two numbers such that they add up to target.


#include <bits/stdc++.h>
using namespace std;
//Brute Force
//vector<int> twoSum(vector<int>& nums, int target) {
  //      for (int i = 0; i < nums.size(); i++) {
    //        for (int j = i + 1; j < nums.size(); j++) {
      //          if (nums[i] + nums[j] == target) {
        //            return {i, j};
          //      }
         //   }
    //    }
    //    return {};
// }

//optimized
 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
         for(int i = 0; i < nums.size(); i++){
             if(mp.find(target - nums[i]) == mp.end())
               mp[nums[i]] = i;
             else
                 return {mp[target - nums[i]], i};
         }
 
        return {-1, -1};
     }

int main()
{
    vector <int> a = {1 , 4 , 5 , 11 , 12};
    int target = 9;
    for(int &x : twoSum(a , target))
        cout << x << " ";
    cout << '\n';
}