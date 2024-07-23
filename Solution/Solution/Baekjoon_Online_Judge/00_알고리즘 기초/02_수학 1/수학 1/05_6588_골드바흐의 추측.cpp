#include <iostream>
#include <vector>

#define IDX_LIMIT 1000000

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput;
	vector<bool> vecChkPrime(IDX_LIMIT + 1, true);

	for (int iIdxChkPrime = 2; iIdxChkPrime <= IDX_LIMIT; iIdxChkPrime++)
	{
		if (true == vecChkPrime[iIdxChkPrime])
		{
			for (int iIdxMult = iIdxChkPrime + iIdxChkPrime; iIdxMult <= IDX_LIMIT; iIdxMult += iIdxChkPrime)
				vecChkPrime[iIdxMult] = false;
		}
	}

	while (true)
	{
		bool bIsSucceeded{};

		cin >> iInput;

		if (0 == iInput)
			break;

		for (int iChkLeft = 3; iChkLeft < IDX_LIMIT; iChkLeft += 2)
		{
			if (true == vecChkPrime[iChkLeft] && 1 == (iInput - iChkLeft) % 2)
			{
				if (true == vecChkPrime[iInput - iChkLeft])
				{
					cout << iInput << " = " << iChkLeft << " + " << iInput - iChkLeft << '\n';
					bIsSucceeded = true;
					break;
				}
			}
		}

		if (false == bIsSucceeded)
			cout << "Goldbach's conjecture is wrong." << '\n';
	}

	return 0;
}