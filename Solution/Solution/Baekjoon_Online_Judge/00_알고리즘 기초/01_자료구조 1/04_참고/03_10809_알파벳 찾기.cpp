// Notes
// �����̳ʸ� ������ ���ÿ� Ư�� ������ŭ
// ��� ���Ҹ� ���� ������ �ʱ�ȭ�ϰ� ������
// array �����̳ʷδ� �Ұ����ϴ�.
// ����, vector�� ������ �������� ����ߴ�.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string strInput;
	vector<int> vecBuff(('z' - 'a' + 1), -1);

	cin >> strInput;

	int iStrSize = static_cast<int>(strInput.size());
	for (int iCntIdx = 0; iCntIdx < iStrSize; iCntIdx++)
		if (-1 == vecBuff[strInput[iCntIdx] - 'a'])
			vecBuff[strInput[iCntIdx] - 'a'] = iCntIdx;

	for (int iElem : vecBuff)
		cout << iElem << ' ';

	return 0;
}