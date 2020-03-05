//Given a string s consists of upper/lower-case alphabets and empty space charac
//ters ' ', return the length of last word (last word means the last appearing wor
//d if we loop from left to right) in the string. 
//
// If the last word does not exist, return 0. 
//
// Note: A word is defined as a maximal substring consisting of non-space charac
//ters only. 
//
// Example: 
//
// 
//Input: "Hello World"
//Output: 5
// 
//
// 
// Related Topics 字符串


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = 0;
        for(int i=s.length();i>=0;i--)
        {
            if(s[i] =='\0' || (s[i] == ' ' & j == 0))
            {
                j = 0;
            }
            else if(s[i] == ' ' && j != 0)
            {
                return j;
            }
            else
            {
                j++;
            }
        }
        return j;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
