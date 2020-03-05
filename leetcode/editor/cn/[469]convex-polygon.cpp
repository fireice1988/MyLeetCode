//Given a list of points that form a polygon when joined sequentially, find if t
//his polygon is convex (Convex polygon definition). 
//
// 
//
// Note: 
//
// 
// There are at least 3 and at most 10,000 points. 
// Coordinates are in the range -10,000 to 10,000. 
// You may assume the polygon formed by given points is always a simple polygon 
//(Simple polygon definition). In other words, we ensure that exactly two edges in
//tersect at each vertex, and that edges otherwise don't intersect each other. 
// 
//
// 
//
// Example 1: 
//
// 
//[[0,0],[0,1],[1,1],[1,0]]
//
//Answer: True
//
//Explanation:
// 
//
// Example 2: 
//
// 
//[[0,0],[0,10],[10,10],[10,0],[5,5]]
//
//Answer: False
//
//Explanation:
// 
// Related Topics 数学


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int twoDCrossProd(const vector<int>& x, const vector<int>& y)
    {
        if(x.size() == y.size() && x.size() ==2)
        {
            return x[0]*y[1]-x[1]*y[0];
        }
        return 0;
    }
    bool isConvex(vector<vector<int>>& points) {
        long long n = points.size(), pre = 0, cur = 0;
        for (int i = 0; i < n; ++i) {
            int dx1 = points[(i + 1) % n][0] - points[i][0];
            int dx2 = points[(i + 2) % n][0] - points[i][0];
            int dy1 = points[(i + 1) % n][1] - points[i][1];
            int dy2 = points[(i + 2) % n][1] - points[i][1];
            cur = dx1 * dy2 - dx2 * dy1;
            if (cur != 0) {
                if (cur * pre < 0) return false;
                else pre = cur;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
