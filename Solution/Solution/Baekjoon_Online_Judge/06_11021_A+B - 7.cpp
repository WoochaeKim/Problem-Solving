#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumT, iNumA, iNumB;

    cin >> iNumT;

    for (int iIdxT = 1; iIdxT <= iNumT; iIdxT++)
    {
        cin >> iNumA >> iNumB;
        cout << "Case #" << iIdxT << ": " << iNumA + iNumB << "\n";
    }

    return 0;
}