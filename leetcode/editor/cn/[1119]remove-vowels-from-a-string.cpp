//Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and r
//eturn the new string. 
//
// 
//
// Example 1: 
//
// 
//Input: "leetcodeisacommunityforcoders"
//Output: "ltcdscmmntyfrcdrs"
// 
//
// Example 2: 
//
// 
//Input: "aeiou"
//Output: ""
// 
//
// 
//
// Note: 
//
// 
// S consists of lowercase English letters only. 
// 1 <= S.length <= 1000 
// 
// Related Topics 字符串


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeVowels(string S) {
        string output = "";
        for(int i=0;i<S.length();i++)
        {
            if(S[i] =='a' || S[i] == 'e' || S[i] == 'i' ||S[i]== 'o'||S[i] =='u')
            {
                continue;
            }
            else
            {
                output = output + S[i];
            }
        }
        return output;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
