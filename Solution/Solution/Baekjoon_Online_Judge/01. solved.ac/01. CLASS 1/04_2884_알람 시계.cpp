#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int OFFSET{ 45 }, HOURS_IN_DAY(24), MINUTES_IN_HOUR{60};
	int iHour{}, iMinute{};

	cin >> iHour >> iMinute;

	iMinute -= OFFSET;

	if (0 > iMinute)
	{
		iMinute = MINUTES_IN_HOUR + iMinute;
		--iHour;

		if (0 > iHour)
			iHour = HOURS_IN_DAY + iHour;
	}

	cout << iHour << ' ' << iMinute;

	return 0;
}