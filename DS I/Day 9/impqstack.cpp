class MyQueue {
public:
    MyQueue() {
         }
    stack<int> s1;
    stack<int> s2;
    void push(int x) {
        s1.push(x);
    }
       int pop() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        s2.pop();
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }   
    int peek() {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s2.top();
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    bool empty() {
        return (s1.empty());
    }
};