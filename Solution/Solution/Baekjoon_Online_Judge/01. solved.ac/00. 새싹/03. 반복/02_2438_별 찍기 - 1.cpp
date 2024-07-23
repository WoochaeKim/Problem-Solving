#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputN{};

	cin >> iInputN;

	for (int iIdx = 1; iIdx <= iInputN; iIdx++)
	{
		int iCntStar = iIdx;
		while (iCntStar--)
			cout << '*';
		
		cout << '\n';
	}
	
	return 0;
}