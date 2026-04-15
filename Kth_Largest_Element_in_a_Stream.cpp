#include <queue>
using namespace std;

class KthLargest {
public:
    priority_queue<int> maxHeap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int i = 0; i < nums.size(); i++)
        {
            maxHeap.push(nums[i]);
        }
    }
    
    int add(int val) {
        maxHeap.push(val);
        priority_queue<int> temp(maxHeap);
        for (int i = 0; i < k - 1; i++)
        {
            temp.pop();
        }
        return temp.top();
    }
};
