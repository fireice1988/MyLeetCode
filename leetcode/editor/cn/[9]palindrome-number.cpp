//Determine whether an integer is a palindrome. An integer is a palindrome when 
//it reads the same backward as forward. 
//
// Example 1: 
//
// 
//Input: 121
//Output: true
// 
//
// Example 2: 
//
// 
//Input: -121
//Output: false
//Explanation: From left to right, it reads -121. From right to left, it becomes
// 121-. Therefore it is not a palindrome.
// 
//
// Example 3: 
//
// 
//Input: 10
//Output: false
//Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
// 
//
// Follow up: 
//
// Coud you solve it without converting the integer to a string? 
// Related Topics 数学


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long output =0;
        int temp  =x;
        while(temp)
        {
            //int buf = (temp % 10) ;  //把temp的每一位上的数存入buf
            output = (temp % 10)+output*10  ;
            temp = temp / 10;
            //output = buf+output*10  ;
        }
        if(output == x)
        {
            return true;
        }
        return false;


    }
};
//leetcode submit region end(Prohibit modification and deletion)
