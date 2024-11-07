#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{}, iPivot{}, iNumInput{};
	cin >> iSeqSize >> iPivot;

	while (iSeqSize--)
	{
		cin >> iNumInput;
		if (iPivot > iNumInput)
			cout << iNumInput << ' ';
	}

	return 0;
}