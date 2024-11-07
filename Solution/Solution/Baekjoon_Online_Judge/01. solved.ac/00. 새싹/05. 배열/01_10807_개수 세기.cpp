#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSeqSize{}, iNumInput{};
	unordered_map<int, int> umapNumElems{};
	cin >> iSeqSize;

	while (iSeqSize--)
	{
		cin >> iNumInput;
		umapNumElems[iNumInput] += 1;
	}

	cin >> iNumInput;
	cout << umapNumElems[iNumInput];

	return 0;
}