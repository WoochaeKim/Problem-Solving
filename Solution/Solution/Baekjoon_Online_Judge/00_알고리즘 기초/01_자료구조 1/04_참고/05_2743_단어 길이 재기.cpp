// Notes
// 원시적인 방법으로 접근하려면 다음과 같다.
// 1. 크기가 고정된 char형 배열을 생성한다.
// 2. 해당 배열에 입력 문자열을 받는다.
// 3. 해당 배열을 순회하면서
//	  널 문자 '\0'을 만날 때 까지 카운팅한다.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};

	cin >> strInput;
	cout << strInput.size();

	return 0;
}