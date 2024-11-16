#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputNum{};
	cin >> iInputNum;

	queue<int> queCardGame{};
	
	for (int iCntNum{ 1 }; iCntNum <= iInputNum; ++iCntNum)
		queCardGame.push(iCntNum);

	while (1 < queCardGame.size())
	{
		queCardGame.pop();
		
		queCardGame.push(queCardGame.front());
		queCardGame.pop();
	}

	cout << queCardGame.front();

	return 0;
}