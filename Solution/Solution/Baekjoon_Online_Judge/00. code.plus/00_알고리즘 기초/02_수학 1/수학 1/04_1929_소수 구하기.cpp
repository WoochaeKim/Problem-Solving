#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	
	int iLower, iUpper;
	vector<bool> vecChkPrime;
	vector<int> vecBuffPrime;
	
	cin >> iLower >> iUpper;

	vecChkPrime.resize(iUpper + 1, true);

	for (int iIdxChkPrime = 2; iIdxChkPrime <= iUpper; iIdxChkPrime++)
	{
		if (true == vecChkPrime[iIdxChkPrime])
		{
			if (iLower <= iIdxChkPrime)
				vecBuffPrime.push_back(iIdxChkPrime);
			for (int iIdxMult = iIdxChkPrime + iIdxChkPrime; iIdxMult <= iUpper; iIdxMult += iIdxChkPrime)
				vecChkPrime[iIdxMult] = false;
		}
	}

	for (int Prime : vecBuffPrime)
		cout << Prime << '\n';

	return 0;
}