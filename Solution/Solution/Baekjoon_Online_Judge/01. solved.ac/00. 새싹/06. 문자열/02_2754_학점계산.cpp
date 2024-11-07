#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int iInteger{}, iFractional{};
	string strInput{}, strOutput{};
	cin >> strInput;

	if ('F' != strInput.front())
	{
		iInteger = 'E' - strInput.front();

		if ('-' == strInput.back())
			--iInteger, iFractional = 7;
		else if ('+' == strInput.back())
			iFractional = 3;
	}

	strOutput = to_string(iInteger) + "." + to_string(iFractional);

	cout << strOutput;

	return 0;
}