#include <iostream>
#include <string>

using namespace std;

class CMyDeQue
{
public:
	CMyDeQue() = delete;
	CMyDeQue(int _iDeQueBuffSize)
	{
		m_iDeQueSize = _iDeQueBuffSize;
		m_pDeQueBuff = new int[_iDeQueBuffSize];
	}
	~CMyDeQue()
	{
		delete[] m_pDeQueBuff;
		m_pDeQueBuff = nullptr;
	}

public:
	void push_front(int _iInputNum)
	{
		(--m_iIdxFront < 0) ? m_pDeQueBuff[m_iDeQueSize + m_iIdxFront] = _iInputNum : m_pDeQueBuff[m_iIdxFront] = _iInputNum;
	}
	void push_back(int _iInputNum)
	{
		(m_iIdxRear < 0) ? m_pDeQueBuff[m_iDeQueSize + m_iIdxRear++] = _iInputNum : m_pDeQueBuff[m_iIdxRear++] = _iInputNum;
	}
	int pop_front()
	{
		if (empty())
			return -1;

		return (m_iIdxFront < 0) ? m_pDeQueBuff[m_iDeQueSize + m_iIdxFront++] : m_pDeQueBuff[m_iIdxFront++];
	}
	int pop_back()
	{
		if (empty())
			return -1;

		return (--m_iIdxRear < 0) ? m_pDeQueBuff[m_iDeQueSize + m_iIdxRear] : m_pDeQueBuff[m_iIdxRear];
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
		if (empty())
			return -1;

		return (m_iIdxFront < 0) ? m_pDeQueBuff[m_iDeQueSize + m_iIdxFront] : m_pDeQueBuff[m_iIdxFront];

	}
	int back()
	{
		if (empty())
			return -1;

		return (m_iIdxRear - 1 < 0) ? m_pDeQueBuff[m_iDeQueSize + (m_iIdxRear - 1)] : m_pDeQueBuff[m_iIdxRear - 1];
	}

private:
	int m_iDeQueSize{};
	int m_iIdxFront{};
	int m_iIdxRear{};
	int* m_pDeQueBuff{};
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumPush{};;
	string strCmd{};

	cin >> iTestCase;

	CMyDeQue MyDeQue{ iTestCase };

	while (iTestCase--)
	{
		cin >> strCmd;

		if ("push_front" == strCmd)
		{
			cin >> iNumPush;
			MyDeQue.push_front(iNumPush);
		}
		else if ("push_back" == strCmd)
		{
			cin >> iNumPush;
			MyDeQue.push_back(iNumPush);
		}
		else if ("pop_front" == strCmd)
			cout << MyDeQue.pop_front() << '\n';
		else if ("pop_back" == strCmd)
			cout << MyDeQue.pop_back() << '\n';
		else if ("size" == strCmd)
			cout << MyDeQue.size() << '\n';
		else if ("empty" == strCmd)
			cout << MyDeQue.empty() << '\n';
		else if ("front" == strCmd)
			cout << MyDeQue.front() << '\n';
		else if ("back" == strCmd)
			cout << MyDeQue.back() << '\n';
		else
			cout << "잘못된 명령어입니다." << '\n';
	}

	return 0;
}