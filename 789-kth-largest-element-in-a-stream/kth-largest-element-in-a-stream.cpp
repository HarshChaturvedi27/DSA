class KthLargest {
    int num;
    priority_queue<int, vector<int>, greater<int>> minh;
public:
    KthLargest(int k, vector<int>& nums) {
        num = k;
        for (auto it : nums){
            minh.push(it);
        }
    }
    
    int add(int val) {
        minh.push(val);
        while (minh.size() > num){
            minh.pop();
        }
        return minh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */