// Cwiczenie_1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	const int W=5, K=8;

	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if (i % 2 == 0)
				cout << "X";
			else
				cout << ".";
		}
		cout << endl;
	}

	return 0;
}

