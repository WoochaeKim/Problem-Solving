#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	time_t tCurTime = time(nullptr);
	tm tmCurTime{};
	localtime_s(&tmCurTime, &tCurTime);

	cout << tmCurTime.tm_year + 1900 << '-' << tmCurTime.tm_mon + 1 << '-' << tmCurTime.tm_mday;

	return 0;
}