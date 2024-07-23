#include <iostream>
#include <string>

using namespace std;

class CMyDeque
{
public:
	CMyDeque() {};
	~CMyDeque() {};

public:
	void push_front(int _iInputX)
	{
		m_arrDequeData[m_iFront--] = _iInputX;
	}

	void push_back(int _iInputX)
	{
		m_arrDequeData[++m_iRear] = _iInputX;
	}

	int pop_front()
	{
		return (empty()) ? -1 : m_arrDequeData[++m_iFront];
	}

	int pop_back()
	{
		return (empty()) ? -1 : m_arrDequeData[m_iRear--];
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
		return (empty()) ? -1 : m_arrDequeData[m_iFront + 1];
	}

	int back()
	{
		return (empty()) ? -1 : m_arrDequeData[m_iRear];
	}

private:
	int m_arrDequeData[20000];
	int m_iFront{10000};
	int m_iRear{10000};
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumT, iNumPush;
	string strInput;
	CMyDeque MyDeque;

	cin >> iNumT;

	cin.ignore();

	while (iNumT--)
	{
		cin >> strInput;

		if ("push_front" == strInput)
		{
			cin >> iNumPush;
			MyDeque.push_front(iNumPush);
		}
		else if ("push_back" == strInput)
		{
			cin >> iNumPush;
			MyDeque.push_back(iNumPush);
		}
		else if ("pop_front" == strInput)
			cout << MyDeque.pop_front() << '\n';
		else if ("pop_back" == strInput)
			cout << MyDeque.pop_back() << '\n';
		else if ("size" == strInput)
			cout << MyDeque.size() << '\n';
		else if ("empty" == strInput)
			cout << MyDeque.empty() << '\n';
		else if ("front" == strInput)
			cout << MyDeque.front() << '\n';
		else if ("back" == strInput)
			cout << MyDeque.back() << '\n';
	}

	return 0;
}