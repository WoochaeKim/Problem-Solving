#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const long long WEIGHT{ 31 }, DIVISOR{ 1234567891 };
	int iStrSize{};
	long long llSumTerm{};
	string strInput{};

	cin >> iStrSize >> strInput;

	vector<long long> vecTermWeight(iStrSize);

	vecTermWeight.front() = 1;
	for (int iCntIdx{1}; iCntIdx < iStrSize; ++iCntIdx)
		vecTermWeight[iCntIdx] = (vecTermWeight[iCntIdx - 1] * WEIGHT) % DIVISOR;

	for (int iCntIdx{}; iCntIdx < iStrSize; ++iCntIdx)
		llSumTerm += ((strInput[iCntIdx] - 'a' + 1) * vecTermWeight[iCntIdx]) % DIVISOR;

	cout << llSumTerm % DIVISOR;

	return 0;
}