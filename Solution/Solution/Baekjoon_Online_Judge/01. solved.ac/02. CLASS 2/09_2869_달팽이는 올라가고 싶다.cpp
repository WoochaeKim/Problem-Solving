#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iUp{}, iDown{}, iHight{}, iArriveDay{1};
	cin >> iUp >> iDown >> iHight;

	int iDailyDist{ iUp - iDown };
	int iPrevArrDist{ iHight - iUp };

	iArriveDay += iPrevArrDist / iDailyDist;

	if (iPrevArrDist % iDailyDist)
		++iArriveDay;

	cout << iArriveDay;

	return 0;
}