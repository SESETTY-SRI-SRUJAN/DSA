#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxElement = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxElement) {
                maxElement = nums[i];
            }
        }
        return maxElement;
    }
};
