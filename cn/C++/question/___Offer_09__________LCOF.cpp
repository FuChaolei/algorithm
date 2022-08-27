// @algorithm @lc id=100273 lang=cpp
// @title yong-liang-ge-zhan-shi-xian-dui-lie-lcof
class CQueue
{
public:
    stack<int> st1;
    stack<int> st2;
    CQueue()
    {
    }

    void appendTail(int value)
    {
        st1.push(value);
    }

    int deleteHead()
    {
        if (st1.empty() && st2.empty())
        {
            return -1;
        }
        while (!st2.empty())
        {
            int res = st2.top();
            st2.pop();
            return res;
        }
        while (!st1.empty())
        {
            int tmp = st1.top();
            st2.push(tmp);
            st1.pop();
        }
        int res = st2.top();
        st2.pop();
        return res;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */