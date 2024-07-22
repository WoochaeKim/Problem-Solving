// Notes
// 1. ASCII 코드
//	 1) A는 65, Z 90이다.
//	 2) A(65)가 a(97) 보다 인덱스 순서가 빠르다.
//   3) A와 a의 간격은 32만큼 차이가 있다.
// 2. 후위 표기식 외 전위, 중위 표기식 그리고 순회를 이해하자.
// 3. 문제에서는 연산자의 종류나 범위를  한정짓지 않아서 곤란했다.
//	  따라서 사칙연산(+, -, *, /)으로 연산자를 한정하여 작성했다.
// 4. 소수점 2자리 제한 실수 출력.
//   1) #include <iomanip> : 입력 및 출력 형식을 조정하는 함수들이 포함된 헤더 파일
//     (1) fixed : 고정 소수점 표기법을 사용하도록 설정.
//     (2) setprecision(2) : 소수점 이하 두 자리까지만 표시하도록 설정.
// 5. 범위가 -20억 ~ 20억 이므로 자료형을 float형이 아닌 double형으로 써야한다.

#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumN;
	double fLHS, fRHS;
	string strInput;
	stack<double> stkBuff;
	vector<int> vecValues;

	cin >> iNumN;
	vecValues.resize(iNumN);

	cin >> strInput;

	for (int& iValue : vecValues)
		cin >> iValue;

	for (char chElem : strInput)
	{
		if (64 < chElem && 91 > chElem)
		{
			stkBuff.push(static_cast<double>(vecValues[chElem - 'A']));
		}
		else
		{
			fRHS = stkBuff.top();
			stkBuff.pop();
			fLHS = stkBuff.top();
			stkBuff.pop();

			switch (chElem)
			{
			case '+':
				stkBuff.push(fLHS + fRHS);
				break;
			case '-':
				stkBuff.push(fLHS - fRHS);
				break;
			case '*':
				stkBuff.push(fLHS * fRHS);
				break;
			case '/':
				stkBuff.push(fLHS / fRHS);
				break;
			}
		}
	}

	cout << fixed << setprecision(2) << stkBuff.top() << '\n';

	return 0;
}