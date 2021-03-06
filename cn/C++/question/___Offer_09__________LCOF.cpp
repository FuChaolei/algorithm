// @algorithm @lc id=100273 lang=cpp
// @title yong-liang-ge-zhan-shi-xian-dui-lie-lcof
class CQueue
{
private:
	stack<int> st1;
	stack<int> st2;

public:
	CQueue()
	{
	}

	void appendTail(int value)
	{
		st1.push(value);
		//st1.push(value);
	}

	int deleteHead()
	{
		if (st2.empty() && st1.empty())
			return -1;
		if (!st2.empty())
		{
			int t = st2.top();
			st2.pop();
			return t;
		}
		else
		{
			while (!st1.empty())
			{
				int t = st1.top();
				st2.push(t);
				st1.pop();
			}
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