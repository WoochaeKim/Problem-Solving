#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum TYPE { TYPE_A, TYPE_B, TYPE_C, TYPE_END };

	array<string, TYPE_END> arrBuff{};

	for (int iIdx = 0; iIdx < TYPE_END; iIdx++)
		cin >> arrBuff[iIdx];

	cout << stoi(arrBuff[TYPE_A]) + stoi(arrBuff[TYPE_B]) - stoi(arrBuff[TYPE_C]) << '\n';
	cout << stoi(arrBuff[TYPE_A] + arrBuff[TYPE_B]) - stoi(arrBuff[TYPE_C]) << '\n';

	return 0;
}