#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputT{};
	string strInput{};

	cin >> iInputT;
	
	while (iInputT--)
	{
		cin >> strInput;
		cout << strInput.front() << strInput.back() << '\n';
	}

	return 0;
}