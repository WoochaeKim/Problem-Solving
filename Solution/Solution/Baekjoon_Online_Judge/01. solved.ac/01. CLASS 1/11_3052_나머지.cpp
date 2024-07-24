#include <iostream>
#include <unordered_set>

#define LIMIT_IDX 10
#define DIVISOR 42

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInput, iLoop{ LIMIT_IDX };
	unordered_set<int> setDupCheck;

	while (iLoop--)
	{
		cin >> iInput;
		setDupCheck.emplace(iInput % DIVISOR);
	}

	cout << setDupCheck.size();

	return 0;
}