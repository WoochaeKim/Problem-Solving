#include <iostream>
#include <string>

using namespace std;

class CMyStack
{
public:
    CMyStack() {};
    ~CMyStack() {};

public:
    void push(int _iInputData)
    {
        m_arrStackData[++m_iTapIndex] = _iInputData;
    }

    int pop()
    {
        return (empty()) ? -1 : m_arrStackData[m_iTapIndex--];
    }

    int size()
    {
        return m_iTapIndex + 1;
    }

    int empty()
    {
        return (0 > m_iTapIndex) ? 1 : 0;
    }

    int top()
    {
        return (empty()) ? -1 : m_arrStackData[m_iTapIndex];
    }

private:
    int m_arrStackData[10000];
    int m_iTapIndex{ -1 };
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumT;
    int iNumPush;
    string strCmd;

    CMyStack MyStack{};

    cin >> iNumT;

    while (iNumT--)
    {
        cin >> strCmd;

        if ("push" == strCmd)
        {
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
    }

    return 0;
}