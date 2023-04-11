//1.Valid Parentheses: Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
bool isValid(string s) {
    stack<char> stk;
    //This is a range-based for loop in C++, also known as a "foreach" loop. 
    //It is used to iterate over a range of elements in a container, such as a string, array, or vector.
    for (char c : s) {    //c" refers to the current character being processed in the string "s"
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else {
            if (stk.empty()) return false;
            char top = stk.top(); stk.pop();
            if (c == ')' && top != '(') return false;
            if (c == ']' && top != '[') return false;
            if (c == '}' && top != '{') return false;
        }
    }
    return stk.empty();
}


//2.Reverse a String using a Stack: Given a string, reverse it using a stack.
string reverseString(string s) {
    stack<char> stk;
    for (char c : s) {
        stk.push(c);
    }
    string result = "";
    while (!stk.empty()) {
        result += stk.top(); stk.pop();
    }
    return result;
}


//3.Minimum Element in a Stack: Design a stack that supports push, pop, and getMin operations, where getMin returns the minimum element in the stack.
class MinStack {
public:
    void push(int x) {
        stk.push(x);
        if (minStk.empty() || x <= minStk.top()) {
            minStk.push(x);
        }
    }

    void pop() {
        int top = stk.top(); stk.pop();
        if (top == minStk.top()) {
            minStk.pop();
        }
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return minStk.top();
    }
private:
    stack<int> stk;
    stack<int> minStk;
};


//4.Next Greater Element: Given an array, find the next greater element for each element in the array.
vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> stk;
    for (int i = 0; i < n; i++) {
        while (!stk.empty() && nums[stk.top()] < nums[i]) {
            result[stk.top()] = nums[i];
            stk.pop();
        }
        stk.push(i);
    }
    return result;
}

//5.Implement Queue using Stacks: Implement a queue using two stacks.
class MyQueue {
public:
    void push(int x) {
        stk1.push(x);
    }

    int pop() {
        if (stk2.empty()) {
            while (!stk1.empty()) {
                stk2.push(stk1.top()); stk1.pop();
            }
        }
        int front = stk2.top(); stk2.pop();
        return front;
    }

    int peek() {
        if (stk2.empty()) {
            while (!stk1.empty()) {
                stk2.push(stk1.top()); stk1.pop();
            }
        }
        return stk2.top();
    }

    bool empty() {
        return stk1.empty() && stk2.empty();
    }
private:
    stack<int> stk1;
    stack<int> stk2;
};


//Date - 11-April-2023
