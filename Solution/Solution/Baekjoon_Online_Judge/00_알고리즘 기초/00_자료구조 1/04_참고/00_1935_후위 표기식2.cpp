// Notes
// 1. ASCII �ڵ�
//	 1) A�� 65, Z 90�̴�.
//	 2) A(65)�� a(97) ���� �ε��� ������ ������.
//   3) A�� a�� ������ 32��ŭ ���̰� �ִ�.
// 2. ���� ǥ��� �� ����, ���� ǥ��� �׸��� ��ȸ�� ��������.
// 3. ���������� �������� ������ ������  �������� �ʾƼ� ����ߴ�.
//	  ���� ��Ģ����(+, -, *, /)���� �����ڸ� �����Ͽ� �ۼ��ߴ�.
// 4. �Ҽ��� 2�ڸ� ���� �Ǽ� ���.
//   1) #include <iomanip> : �Է� �� ��� ������ �����ϴ� �Լ����� ���Ե� ��� ����
//     (1) fixed : ���� �Ҽ��� ǥ����� ����ϵ��� ����.
//     (2) setprecision(2) : �Ҽ��� ���� �� �ڸ������� ǥ���ϵ��� ����.
// 5. ������ -20�� ~ 20�� �̹Ƿ� �ڷ����� float���� �ƴ� double������ ����Ѵ�.

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