//Count the number of prime numbers less than a non-negative number, n. 
//
// Example: 
//
// 
//Input: 10
//Output: 4
//Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// 
// Related Topics 哈希表 数学


//leetcode submit region begin(Prohibit modification and deletion)

bool isTrue(int num)
{
    if(num == 0 || num == 1 || num == 4)
    {
        return false;
    }
    if(num == 2 || num ==3)
    {
        return true;
    }
    if(num%6!=1&&num%6!=5) return false;
    //int tmp = sqrt(num);
    for(int i=5;i*i<= num;i += 6)
    {
        if(num % i == 0 || num % (i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(isTrue(i))
            {
                count++;
            }
        }
        return count;
    }

};
//leetcode submit region end(Prohibit modification and deletion)
