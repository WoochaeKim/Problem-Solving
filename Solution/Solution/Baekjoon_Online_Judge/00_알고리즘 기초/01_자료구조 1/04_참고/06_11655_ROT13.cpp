// Notes
// ROT의 의미는 알파벳 전체 개수의 절반을 의미한다.
// 주의할 점은 오프 바이 원 에러(Off-by-One Error)이다.
// 두 값을 간격(Interval)과 개수(Count)를 착각하지 말자.
// 간격(Interval) : 두 값 사이의 차이. (Z - A)
// 개수(Count) : 두 값과 그 사이 값을 포함한 개수. (Z - A + 1)

#include <iostream>
#include <string>

#define ROT13 13

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;

	getline(cin, strInput);

	for (char& chElem : strInput)
	{
		int iAddResult = chElem + ROT13;
		if ('A' <= chElem && 'Z' >= chElem)
			chElem = ('Z' < iAddResult) ? 'A'  + (iAddResult - 'Z' - 1) : iAddResult;
		else if ('a' <= chElem && 'z' >= chElem)
			chElem = ('z' < iAddResult) ? 'a' + (iAddResult - 'z' - 1) : iAddResult;
	}

	cout << strInput;

	return 0;
}