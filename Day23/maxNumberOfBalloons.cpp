/*
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

Example 1:



Input: text = "nlaebolko"
Output: 1
Example 2:



Input: text = "loonbalxballpoon"
Output: 2
Example 3:

Input: text = "leetcode"
Output: 0
 
*/




class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0, a=0, l=0, o=0, n=0;
        for(char c: text){
            if(c=='b'){
                b++;
            }
            if(c=='a'){
                a++;
            }
            if(c=='l'){
                l++;
            }
            if(c=='o'){
                o++;
            }
            if(c=='n'){
                n++;
            }
        }
        l = l/2;
        o = o/2;
        
        vector<int> ans;
        ans.push_back(b);
        ans.push_back(a);
        ans.push_back(l);
        ans.push_back(o);
        ans.push_back(n);
        return *min_element(ans.begin(), ans.end());
        
    }
};