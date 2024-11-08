#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iHeight{}, iWidth{}, iNumGuest{}, iNumRoom{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iHeight >> iWidth >> iNumGuest;
		
		iNumRoom = (iNumGuest % iHeight ? iNumGuest % iHeight : iHeight) * 100;
		iNumRoom += (iNumGuest % iHeight ? iNumGuest / iHeight + 1 : iNumGuest / iHeight);

		cout << iNumRoom << '\n';
	}

	return 0;
}