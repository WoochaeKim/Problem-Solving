#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumT;
    string strInput;
    stack<char> stkBuff;

    cin >> iNumT;

    cin.ignore();

    while (iNumT--)
    {
        getline(cin, strInput);

        strInput += '\n';

            for (char ch : strInput)
            {
                if (' ' == ch || '\n' == ch)
                {
                    while (false == stkBuff.empty())
                    {
                        cout << stkBuff.top();
                        stkBuff.pop();
                    }

                    cout << ch;
                }
                else
                    stkBuff.push(ch);
            }
    }
    return 0;
}