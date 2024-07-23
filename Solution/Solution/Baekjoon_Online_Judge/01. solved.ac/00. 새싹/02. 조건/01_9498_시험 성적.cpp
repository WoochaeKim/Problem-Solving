#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iExamScore{};

	cin >> iExamScore;

	if (90 <= iExamScore)
		cout << 'A';
	else if (80 <= iExamScore && 90 > iExamScore)
		cout << 'B';
	else if (70 <= iExamScore && 80 > iExamScore)
		cout << 'C';
	else if (60 <= iExamScore && 70 > iExamScore)
		cout << 'D';
	else
		cout << 'F';

	return 0;
}