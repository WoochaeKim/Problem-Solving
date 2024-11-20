#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumTestCase{};
	string strInput{};

	cin >> iNumTestCase;

	while (iNumTestCase--)
	{
		bool bIsVPS{ true };
		int iNumOpen{};
		cin >> strInput;

		for (const char& ch : strInput)
		{
			if ('(' == ch)
				++iNumOpen;
			else
			{
				if (0 < iNumOpen)
					--iNumOpen;
				else
				{
					bIsVPS = false;
					break;
				}
			}
		}

		if (0 < iNumOpen)
			bIsVPS = false;

		cout << (bIsVPS ? "YES" : "NO") << '\n';
	}

	return 0;
}