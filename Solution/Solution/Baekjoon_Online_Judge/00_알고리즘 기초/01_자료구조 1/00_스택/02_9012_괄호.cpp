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

    cin >> iNumT;

    cin.ignore();

    while (iNumT--)
    {
        stack<char> stkBuff;
        bool bIsVPS = true;

        getline(cin, strInput);

        for (char ch : strInput)
        {
            if (')' == ch)
            {
                if (stkBuff.empty())
                {
                    bIsVPS = false;
                    break;
                }
                else
                    stkBuff.pop();
            }
            else
                stkBuff.push(ch);
        }

        if (0 != stkBuff.size())
            bIsVPS = false;

        if (bIsVPS)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }

    return 0;
}