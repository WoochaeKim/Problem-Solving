#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumA, iNumB;
    
    while (true)
    {
        cin >> iNumA >> iNumB;  

        if (0 == iNumA && 0 == iNumB)
            break;

        cout << iNumA + iNumB << '\n';
    }

    return 0;
}