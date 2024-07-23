// Notes
// ROT�� �ǹ̴� ���ĺ� ��ü ������ ������ �ǹ��Ѵ�.
// ������ ���� ���� ���� �� ����(Off-by-One Error)�̴�.
// �� ���� ����(Interval)�� ����(Count)�� �������� ����.
// ����(Interval) : �� �� ������ ����. (Z - A)
// ����(Count) : �� ���� �� ���� ���� ������ ����. (Z - A + 1)

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