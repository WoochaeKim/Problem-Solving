#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	char chInput;

	cin >> chInput;
	cout << static_cast<int>(chInput);

	return 0;
}