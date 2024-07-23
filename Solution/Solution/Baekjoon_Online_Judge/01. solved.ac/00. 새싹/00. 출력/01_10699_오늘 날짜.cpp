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

	time_t tCurTime = time(nullptr);
	tm* pCurTime{ localtime(&tCurTime) };

	cout << (*pCurTime).tm_year + 1900 << '-' 
		<< setw(2) << setfill('0') << (*pCurTime).tm_mon + 1 << '-' 
		<< setw(2) << setfill('0') << (*pCurTime).tm_mday;

	return 0;
}