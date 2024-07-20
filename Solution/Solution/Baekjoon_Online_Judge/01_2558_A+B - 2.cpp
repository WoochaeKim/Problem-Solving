#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int iNumA, iNumB;

    cin >> iNumA;
    cin >> iNumB;
    cout << iNumA + iNumB << '\n';

    return 0;
}