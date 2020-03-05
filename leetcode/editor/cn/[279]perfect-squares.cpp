#include "math.h"

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSquares(int n) {
        while(n % 4 == 0)
        {
            n /= 4;
        }
        if (n % 8 == 7) {
            return 4;
        }
        int a = 0;
        while (a*a <= n) {
           int  b = int(sqrt((n - a*a)));
            if((a*a + b*b) == n)
            {
                return (!!a)+(!!b);
            }
            a += 1;
        }
        return 3;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
