#include <iostream>
#include <string>

using namespace std;

class CMyQueue
{
public:
	CMyQueue() {};
	~CMyQueue() {};

public:
	void push(int _iInputData)
	{
		m_arrQueueData[m_iRear++] = _iInputData;
	}

	int pop()
	{
		return (empty()) ? -1 : m_arrQueueData[m_iFront++];
	}

	int size()
	{
		return (empty()) ? 0 : m_iRear - m_iFront;
	}
	
	int empty()
	{
		return (m_iRear <= m_iFront) ? 1 : 0;
	}

	int front()
	{
		return (empty()) ? -1 : m_arrQueueData[m_iFront];
	}

	int back()
	{
		return (empty()) ? -1 : m_arrQueueData[m_iRear - 1];
	}

private:
	int m_arrQueueData[10000];
	int m_iFront{0};
	int m_iRear{0};
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT, iNumPush;
	string strCmd;

	CMyQueue MyQueue;

	cin >> iNumT;

	while (iNumT--)
	{
		cin >> strCmd;

		if ("push" == strCmd)
		{
			cin >> iNumPush;
			MyQueue.push(iNumPush);
		}
		else if ("pop" == strCmd)
			cout << MyQueue.pop() << '\n';
		else if ("size" == strCmd)
			cout << MyQueue.size() << '\n';
		else if ("empty" == strCmd)
			cout << MyQueue.empty() << '\n';
		else if ("front" == strCmd)
			cout << MyQueue.front() << '\n';
		else if ("back" == strCmd)
			cout << MyQueue.back() << '\n';
	}

	return 0;
}