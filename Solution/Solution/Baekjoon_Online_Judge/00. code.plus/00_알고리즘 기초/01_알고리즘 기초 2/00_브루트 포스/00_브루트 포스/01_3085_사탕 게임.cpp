#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int g_iCmpSize{};
vector<string> g_vecBoard{};

int CountMaxStreakOfColor(bool _bIsRowFix, const int& _iFixIdx)
{
	int iCntStreak{ 1 }, iMaxStreak{};

	for (int iCntIdx{}; iCntIdx < g_iCmpSize; ++iCntIdx)
	{
		if (true == _bIsRowFix)
		{
			if (g_vecBoard[_iFixIdx][iCntIdx] == g_vecBoard[_iFixIdx][iCntIdx + 1])
				++iCntStreak;
			else
				iCntStreak = 1;
		}
		else
		{
			if (g_vecBoard[iCntIdx][_iFixIdx] == g_vecBoard[iCntIdx + 1][_iFixIdx])
				++iCntStreak;
			else
				iCntStreak = 1;
		}

		iMaxStreak = max(iMaxStreak, iCntStreak);
	}

	return iMaxStreak;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iBoardSize{}, iLongest{ 1 };
	cin >> iBoardSize;
	
	g_vecBoard.resize(iBoardSize);

	for (string& strInput : g_vecBoard)
		cin >> strInput;

	g_iCmpSize = iBoardSize - 1;

	for (int iCntIdx{}; iCntIdx < iBoardSize; ++iCntIdx)
	{
		iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntIdx));
		iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntIdx));
	}

	for (int iCntOuter{}; iCntOuter < g_iCmpSize; ++iCntOuter)
	{
		for (int iCntInner{}; iCntInner < g_iCmpSize; ++iCntInner)
		{		
				swap(g_vecBoard[iCntOuter][iCntInner], g_vecBoard[iCntOuter][iCntInner + 1]);
				iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntOuter));
				iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntInner));
				iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntInner + 1));
				swap(g_vecBoard[iCntOuter][iCntInner], g_vecBoard[iCntOuter][iCntInner + 1]);

				swap(g_vecBoard[iCntInner][iCntOuter], g_vecBoard[iCntInner + 1][iCntOuter]);
				iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntOuter));
				iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntInner));
				iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntInner + 1));
				swap(g_vecBoard[iCntInner][iCntOuter], g_vecBoard[iCntInner + 1][iCntOuter]);
		}
	}

	for (int iCntIdx{}; iCntIdx < g_iCmpSize; ++iCntIdx)
	{
		swap(g_vecBoard[iCntIdx][g_iCmpSize], g_vecBoard[iCntIdx + 1][g_iCmpSize]);
		iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntIdx));
		iLongest = max(iLongest, CountMaxStreakOfColor(true, iCntIdx + 1));
		swap(g_vecBoard[iCntIdx][g_iCmpSize], g_vecBoard[iCntIdx + 1][g_iCmpSize]);

		swap(g_vecBoard[iCntIdx][g_iCmpSize], g_vecBoard[g_iCmpSize][iCntIdx + 1]);
		iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntIdx));
		iLongest = max(iLongest, CountMaxStreakOfColor(false, iCntIdx + 1));
		swap(g_vecBoard[iCntIdx][g_iCmpSize], g_vecBoard[g_iCmpSize][iCntIdx + 1]);
	}

	cout << iLongest;

	return 0;
}