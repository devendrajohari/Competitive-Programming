/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       unordered_map<char, int> ump;
       for(int i=0; i<stones.length(); i++){
           if(ump.find(stones[i])!=ump.end()){
               ump[stones[i]]++;
           }else{
               ump[stones[i]] = 1;
           }
       } 
        int count =0;
        for(int i=0; i<jewels.length(); i++){
            if(ump.find(jewels[i])!=ump.end()){
                count = count + ump[jewels[i]];
            }
        }
        return count;
    }
};