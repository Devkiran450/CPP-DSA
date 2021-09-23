#include <bits/stdc++.h>
using namespace std;

class Queue 
{
	stack<int> s;
    public:
	void push(int x)
	{
		s.push(x);
	}
	int pop()
	{
		if (s.empty()) 
        {
			cout << "Q is empty";
			exit(0);
		}
		int x = s.top();
		s.pop();
		if (s.empty())
		{
            return x;
        }
		int item = pop();
		s.push(x);
		return item;
	}
};

// Driver code
int main()
{
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);

	cout << q.pop() << '\n';
	cout << q.pop() << '\n';
	cout << q.pop() << '\n';

	return 0;
}
