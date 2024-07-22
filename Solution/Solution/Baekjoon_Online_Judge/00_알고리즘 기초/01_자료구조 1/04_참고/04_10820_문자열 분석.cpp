// Notes
// getline() 함수의 반환 타입은 std::istream& 이다.
// std::istream& 타입은 입력 스트림 객체에 대한 참조를 반환한다.
// 즉, 입력 스트림 객체의 상태를 bool 값으로 표현한다.
// 함수가 성공적으로 줄을 읽으면 입력 스트림 객체는 true로 반환하고, 
// 오류가 발생하거나 EOF에 도달하면 false로 반환한다.

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	enum CharType { CT_LOWER, CT_UPPER, CT_DIGIT, CT_SPACE, CT_END};

	string strInput{};

	while (getline(cin, strInput))
	{
		array<int, CT_END> arrTypeCounter{};

		for (char chElem : strInput)
		{
			if ('a' <= chElem && 'z' >= chElem)
				arrTypeCounter[CT_LOWER]++;
			else if ('A' <= chElem && 'Z' >= chElem)
				arrTypeCounter[CT_UPPER]++;
			else if ('0' <= chElem && '9' >= chElem)
				arrTypeCounter[CT_DIGIT]++;
			else // 공백
				arrTypeCounter[CT_SPACE]++;
		}

		for (int iCnt : arrTypeCounter)
			cout << iCnt << ' ';

		cout << '\n';
	}
	return 0;
}