#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};
	int iSelect{};

	cin >> strInput;
	cin >> iSelect;

	cout << strInput[iSelect - 1];

	return 0;
}