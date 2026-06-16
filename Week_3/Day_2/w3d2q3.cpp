class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        
        ListNode* temp = head;
        
        while (temp != NULL) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            if (nums[left] != nums[right]) {
                return false;
            }
            
            left++;
            right--;
        }
        
        return true;
    }
};