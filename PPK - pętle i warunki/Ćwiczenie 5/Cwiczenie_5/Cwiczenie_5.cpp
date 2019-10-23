#include <iostream>

using namespace std;

int main()
{
	const int N = 7;
	int pom = N;

	for (int i = 0; i < N / 2; i++)
	{
		for (int k = 0; k < (N - pom) / 2; k++)
			cout << ".";
		for (int j = 0; j < pom; j++)
			cout << "X";
		for (int k = 0; k < (N - pom) / 2; k++)
			cout << ".";
		cout << endl;
		pom -= 2;

	}

	for (int i = 0; i < N / 2 + 1; i++)
	{
		for (int k = 0; k < (N - pom) / 2; k++)
			cout << ".";
		for (int j = 0; j < pom; j++)
			cout << "X";
		for (int k = 0; k < (N - pom) / 2; k++)
			cout << ".";
		cout << endl;
		pom += 2;
	}

	return 0;
}