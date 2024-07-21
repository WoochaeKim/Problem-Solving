// Notes
// 알파벳 개수에 대하여 상수인 26을 바로 쓰는 것보다
// 'z' - 'a' + 1 이렇게 작성하는 것이
// 가독성, 유지보수성, 오류 방지 측면에서 더 바람직 할 것이다.

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;
	array<int, 'z' - 'a' + 1> arrBuff{};

	cin >> strInput;

	for (char chElem : strInput)
		arrBuff[chElem - 'a'] += 1;

	for (int iElem : arrBuff)
		cout << iElem << ' ';

	return 0;
}