// Lab_05_5

#include <iostream>
#include <cmath>
using namespace std;

double recursiveSequence(int n, int level, int& depth);

int main()
{
	int n;
	cout << "n = "; cin >> n;

	int depth = 0;
	double limit = recursiveSequence(n, 1, depth);

	cout << "limit = " << limit << endl;
	cout << "depth = " << depth << endl;

	return 0;
}

double recursiveSequence(int n, int level, int& depth)
{
	if (level > depth)
		depth = level;

	if (n == 1)
		return 1;

	if (n > 1);
	double previous = recursiveSequence(n - 1, level + 1, depth);
	return (1.0 / 3) * (2 * previous + 8 / (previous * previous));
}