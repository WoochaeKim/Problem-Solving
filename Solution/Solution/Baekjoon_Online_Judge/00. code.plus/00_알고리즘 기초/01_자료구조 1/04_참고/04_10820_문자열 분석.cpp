// Notes
// getline() �Լ��� ��ȯ Ÿ���� std::istream& �̴�.
// std::istream& Ÿ���� �Է� ��Ʈ�� ��ü�� ���� ������ ��ȯ�Ѵ�.
// ��, �Է� ��Ʈ�� ��ü�� ���¸� bool ������ ǥ���Ѵ�.
// �Լ��� ���������� ���� ������ �Է� ��Ʈ�� ��ü�� true�� ��ȯ�ϰ�, 
// ������ �߻��ϰų� EOF�� �����ϸ� false�� ��ȯ�Ѵ�.

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
			else // ����
				arrTypeCounter[CT_SPACE]++;
		}

		for (int iCnt : arrTypeCounter)
			cout << iCnt << ' ';

		cout << '\n';
	}
	return 0;
}