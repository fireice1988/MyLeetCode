//Given a 32-bit signed integer, reverse digits of an integer. 
//
// Example 1: 
//
// 
//Input: 123
//Output: 321
// 
//
// Example 2: 
//
// 
//Input: -123
//Output: -321
// 
//
// Example 3: 
//
// 
//Input: 120
//Output: 21
// 
//
// Note: 
//Assume we are dealing with an environment which could only store integers with
//in the 32-bit signed integer range: [−231, 231 − 1]. For the purpose of this pro
//blem, assume that your function returns 0 when the reversed integer overflows. 
// Related Topics 数学


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reverse(int x) {
        int temp=x;
        //int buf={'\0'};
        int i=0;
        long output = 0;
        while(temp)
        {
            int buf = (temp % 10) ;  //把temp的每一位上的数存入buf
            temp = temp / 10;
            if (output> INT_MAX/10 || (output == INT_MAX / 10 && buf > 7)) return 0;
            if (output < INT_MIN/10 || (output == INT_MIN / 10 && buf < -8)) return 0;
            output = output * 10 + buf;
        }
        return output;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
