#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumT, iNumA, iNumB;
    char chComma;
    
    cin >> iNumT;

    while (iNumT--)
    {
        cin >> iNumA >> chComma >> iNumB;
        cout << iNumA + iNumB << '\n';
    }

    return 0;
}