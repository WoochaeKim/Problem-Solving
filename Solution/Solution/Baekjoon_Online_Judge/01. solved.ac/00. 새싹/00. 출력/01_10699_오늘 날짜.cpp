#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int OFFSET_KOR{ 9 * 60 * 60 };

	time_t tCurTime{ time(nullptr) + OFFSET_KOR };
	tm* pCurTime{ gmtime(&tCurTime) };

	cout << pCurTime->tm_year + 1900 << '-'
		<< setw(2) << setfill('0') << pCurTime->tm_mon + 1 << '-'
		<< setw(2) << setfill('0') << pCurTime->tm_mday;
		
	return 0;
}