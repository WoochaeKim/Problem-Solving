// Notes
// 컨테이너를 생성과 동시에 특정 범위만큼
// 모든 원소를 같은 값으로 초기화하고 싶지만
// array 컨테이너로는 불가능하다.
// 따라서, vector의 범위를 한정지어 사용했다.

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