#include <iostream>
#include <iomanip>
#include <string>

#define OFFSET 0.3

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	float fScore{};
	string strInput{};
	
	cin >> strInput;

	if ('F' == strInput.front())
		cout << fixed << setprecision(1) << fScore;
	else
	{
		fScore = static_cast<float>('E' - strInput.front());
		
		if ('0' != strInput.back())
			fScore += static_cast<float>('+' == strInput.back() ? OFFSET : OFFSET * -1);

		cout << fixed << setprecision(1) << fScore;
	}
	return 0;
}