#include <iostream>

#define OFFSET 45
#define DAY_TO_MINUTES 1440

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iHour, iMinute, iSetTime;

	cin >> iHour >> iMinute;

	iSetTime = (iHour * 60 + iMinute) - OFFSET;

	if (0 > iSetTime)
		iSetTime += DAY_TO_MINUTES;

	cout << iSetTime / 60 << ' ' << iSetTime % 60;

	return 0;
}