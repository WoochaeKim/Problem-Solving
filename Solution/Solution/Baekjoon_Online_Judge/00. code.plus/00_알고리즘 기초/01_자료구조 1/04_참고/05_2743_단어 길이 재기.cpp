// Notes
// �������� ������� �����Ϸ��� ������ ����.
// 1. ũ�Ⱑ ������ char�� �迭�� �����Ѵ�.
// 2. �ش� �迭�� �Է� ���ڿ��� �޴´�.
// 3. �ش� �迭�� ��ȸ�ϸ鼭
//	  �� ���� '\0'�� ���� �� ���� ī�����Ѵ�.

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