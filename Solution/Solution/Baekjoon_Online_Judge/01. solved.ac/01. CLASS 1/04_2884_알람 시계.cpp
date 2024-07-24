#include <iostream>

#define OFFSET 45
#define ONE_DAY_TO_MINUTES 1440
#define ONE_HOUR_TO_MINUTES 60

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iHour, iMinute, iSetTime;

	cin >> iHour >> iMinute;

	iSetTime = (iHour * ONE_HOUR_TO_MINUTES + iMinute) - OFFSET;

	if (0 > iSetTime)
		iSetTime += ONE_DAY_TO_MINUTES;

	cout << iSetTime / ONE_HOUR_TO_MINUTES << ' ' << iSetTime % ONE_HOUR_TO_MINUTES;

	return 0;
}