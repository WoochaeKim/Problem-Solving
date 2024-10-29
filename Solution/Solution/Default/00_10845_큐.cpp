#include <iostream>
#include <string>

using namespace std;

class CMyQueue
{
public:
	CMyQueue() = delete;
	CMyQueue(int _iQueBuffSize)
	{
		m_pQueBuff = new int[_iQueBuffSize];
	}
	~CMyQueue()
	{
		delete[] m_pQueBuff;
		m_pQueBuff = nullptr;
	}

public:
	void push(int _iInputNum)
	{
		m_pQueBuff[m_iIdxRear++] = _iInputNum;
	}
	int pop()
	{
		return empty() ? -1 : m_pQueBuff[m_iIdxFront++];
	}
	int size()
	{
		return m_iIdxRear - m_iIdxFront;
	}
	int empty()
	{
		return (m_iIdxRear == m_iIdxFront) ? 1 : 0;
	}
	int front()
	{
		return empty() ? -1 : m_pQueBuff[m_iIdxFront];
	}
	int back()
	{
		return empty() ? -1 : m_pQueBuff[m_iIdxRear - 1];
	}

private:
	int m_iIdxFront{};
	int m_iIdxRear{};
	int* m_pQueBuff{};
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int iTestCase{};
	string strCmd{};

	cin >> iTestCase;
	
	CMyQueue MyQueue{ iTestCase };

	while (iTestCase--)
	{
		cin >> strCmd;

		if ("push" == strCmd)
		{
			int iNumPush{};
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
		else
			cout << "잘못된 명령어입니다." << '\n';
	}

	return 0;
}