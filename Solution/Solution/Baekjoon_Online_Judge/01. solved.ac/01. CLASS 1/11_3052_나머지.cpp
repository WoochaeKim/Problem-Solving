#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	const int DIVISOR{ 42 };
	int iIdxLoop{ 10 }, iInputNum{};
	unordered_set<int> usetUniqueRem{};

	while (iIdxLoop--)
	{
		cin >> iInputNum;
		usetUniqueRem.emplace(iInputNum % DIVISOR);
	}

	cout << usetUniqueRem.size();

	return 0;
}