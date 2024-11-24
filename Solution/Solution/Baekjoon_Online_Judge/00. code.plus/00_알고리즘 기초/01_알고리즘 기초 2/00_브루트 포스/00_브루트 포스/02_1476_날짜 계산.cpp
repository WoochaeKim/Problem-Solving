#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int EARTH{ 15 }, SUN{ 28 }, MOON{ 19 };
	int iEarth{}, iSun{}, iMoon{}, iYear{};

	cin >> iEarth >> iSun >> iMoon;
	--iEarth, --iSun, --iMoon;

	while (!(iEarth == iYear % EARTH && iSun == iYear % SUN && iMoon == iYear % MOON))
		++iYear;

	cout << ++iYear;

	return 0;
}