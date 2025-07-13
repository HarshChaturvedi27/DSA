class MedianFinder {
    priority_queue<int, vector<int>, greater<int>> minh; //contains all large elements
    priority_queue<int> maxh; //all min elements
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxh.push(num);

        if (!minh.empty() && maxh.top() > minh.top()){
            minh.push(maxh.top());
            maxh.pop();
        }
        if (maxh.size() > minh.size()){
            minh.push(maxh.top());
            maxh.pop();
        } 
        else if (minh.size() > maxh.size() + 1){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        double m = 0;
        if (minh.size() == maxh.size()){
            m = double(minh.top() + maxh.top()) / 2;
        } else{
            m = minh.top();
        }
        return m;
    }
};

// TLE
// class MedianFinder {
//     vector<int> v;
// public:
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         v.push_back(num);
//     }
    
//     double findMedian() {
//         sort(v.begin(), v.end());
//         int n = v.size();
//         double m = 0;
//         if (n % 2 == 0){
//             m = double(v[n/2 - 1] + v[n/2]) / 2;
//         } else m = double(v[n/2]);
//         return m;
//     }
// };

// TLE
// class MedianFinder {
//     priority_queue<int, vector<int>, greater<int>> minh;
// public:
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         minh.push(num);
//     }
    
//     double findMedian() {
//         auto q = minh;
//         int n = q.size();
//         double m = 0;
//         if (n % 2 == 0){
//             while (q.size() > n/2 + 1){
//                 q.pop();
//             }
//             int m1 = q.top();
//             q.pop();
//             int m2 = q.top();
//             m = double(m1 + m2) / 2;
//         } else{
//             while (q.size() > n/2 + 1){
//                 q.pop();
//             }
//             m = q.top();
//         }
//         return m;
//     }
// };

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */