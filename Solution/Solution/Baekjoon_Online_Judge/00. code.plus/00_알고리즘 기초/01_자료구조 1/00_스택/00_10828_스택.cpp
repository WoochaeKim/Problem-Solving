#include <iostream>
#include <string>

using namespace std;

class CMyStack
{
public:
	CMyStack() = delete;
	CMyStack(int _StkBuffSize)
	{
		m_iStkSize = _StkBuffSize;
		m_iStkBuff = new int[_StkBuffSize];
	}
	~CMyStack()
	{
		delete[] m_iStkBuff;
		m_iStkBuff = nullptr;
	}

public:
	void push(int _InputNum)
	{
		m_iStkBuff[++m_iTop] = _InputNum;
	}
	int pop()
	{
		return empty() ? m_iTop : m_iStkBuff[m_iTop--];
	}
	int size()
	{
		return m_iTop + 1;
	}
	int empty()
	{
		return -1 == m_iTop ? 1 : 0;
	}
	int top()
	{
		return empty() ? m_iTop : m_iStkBuff[m_iTop];
	}

private:
	int m_iStkSize{ 0 };
	int m_iTop{ -1 };
	int* m_iStkBuff{ nullptr };
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase;
	string strCmd{};

	cin >> iNumTestCase;

	CMyStack MyStack(iNumTestCase);

	while (iNumTestCase--)
	{
		cin >> strCmd;

		if ("push" == strCmd)
		{
			int iNumPush;
			cin >> iNumPush;
			MyStack.push(iNumPush);
		}
		else if ("pop" == strCmd)
			cout << MyStack.pop() << '\n';
		else if ("size" == strCmd)
			cout << MyStack.size() << '\n';
		else if ("empty" == strCmd)
			cout << MyStack.empty() << '\n';
		else if ("top" == strCmd)
			cout << MyStack.top() << '\n';
		else
			cout << "잘못된 명령어입니다.";
	}

	return 0;
}