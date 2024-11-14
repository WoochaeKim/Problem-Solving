#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumSubject{}, iMaxScore{};
	double dSum{};
	cin >> iNumSubject;

	vector<int> vecSubject(iNumSubject);

	for (int& iScore : vecSubject)
	{
		cin >> iScore;

		if (iMaxScore < iScore)
			iMaxScore = iScore;
	}

	for (int& iScore : vecSubject)
		dSum += (static_cast<double>(iScore) / static_cast<double>(iMaxScore) * 100.0);

	cout << fixed << dSum / static_cast<double>(iNumSubject);

	return 0;
}