//Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
// determine if the input string is valid. 
//
// An input string is valid if: 
//
// 
// Open brackets must be closed by the same type of brackets. 
// Open brackets must be closed in the correct order. 
// 
//
// Note that an empty string is also considered valid. 
//
// Example 1: 
//
// 
//Input: "()"
//Output: true
// 
//
// Example 2: 
//
// 
//Input: "()[]{}"
//Output: true
// 
//
// Example 3: 
//
// 
//Input: "(]"
//Output: false
// 
//
// Example 4: 
//
// 
//Input: "([)]"
//Output: false
// 
//
// Example 5: 
//
// 
//Input: "{[]}"
//Output: true
// 
// Related Topics 栈 字符串


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0)
        {
            return false;
        }
        stack<char> list;
        for(int i =0;i<s.length();i++)
        {
            if(s[i] =='(' || s[i] =='{' ||s[i] =='[')
            {
                list.push(s[i]);
            }
            else if(((s[i] ==')') || (s[i] =='}')  || (s[i] ==']')) &&  list.empty())
            {
                return false;
            }
            else if((s[i] ==')' && list.top() == '(') || (s[i] =='}' && list.top() == '{')  || (s[i] ==']' && list.top() == '[' ) )
            {
                list.pop();
            }
            else if((s[i] ==')' && list.top() != '(') || (s[i] =='}' && list.top() != '{')  || (s[i] ==']' && list.top() != '[' ) )
            {
                return false;
            }
        }
        if(list.empty())
        {
            return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
