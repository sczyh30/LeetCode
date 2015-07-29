/**
 O(n2) runtime, O(1) space ¨C Brute force
 O(n) runtime, O(n) space ¨C Hash table:
 We could reduce the runtime complexity of looking up a value to O(1) 
 using a hash map that maps a value to its index.
 
 My first solution:
 first sort the vector, then use two flags to traverse the vector
 and get the flag from inital vector
**/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> v(nums);
    	sort(v.begin(), v.end());
    
    	int p1 = 0, p2 = v.size() - 1;
    	while (p1 < p2) {
    		if (v[p1] + v[p2] == target)
    			break;
    		else if (v[p1] + v[p2] > target)
    			--p2;
    		else
    			++p1;
    	}
    	vector<int> index;
    	for (int i = 0, pc = 2; i < nums.size(); ++i) {
    		if (v[p1] == nums[i] || v[p2] == nums[i]) {
    			index.push_back(i + 1);
    			if (--pc == 0)
    				break;
    		}
    	}
        return index;
    }
};
