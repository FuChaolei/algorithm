// @algorithm @lc id=100170 lang=cpp
// @title implement-queue-using-stacks-lcci
class MyQueue
{
public:
	/** Initialize your data structure here. */
	MyQueue()
	{
	}

	/** Push element x to the back of queue. */
	void push(int x)
	{
		s1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop()
	{
		int res;
		if (!s2.empty())
		{
			res = s2.top();
			s2.pop();
		}
		else
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
			res = s2.top();
			s2.pop();
		}
		return res;
	}

	/** Get the front element. */
	int peek()
	{
		int res;
		if (!s2.empty())
		{
			res = s2.top();
		}
		else
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
			res = s2.top();
		}
		return res;
	}

	/** Returns whether the queue is empty. */
	bool empty()
	{
		if (s1.empty() && s2.empty())
			return true;
		return false;
	}
	stack<int> s1;
	stack<int> s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */