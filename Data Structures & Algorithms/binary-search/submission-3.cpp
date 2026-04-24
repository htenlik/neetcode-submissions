class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while(left < right){
            int mid = ( left + right ) / 2;
            cout << left << " " << right << " " << mid << " " << nums[mid] << endl;
            if (nums[mid] == target) return mid;

            if (nums[mid] < target) left = mid+1;
            if (nums[mid] > target) right = mid;

        }
        return -1;
    }
};
