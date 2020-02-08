#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double square_of_triagle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double a = distance(x1, y1, x2, y2);
	double b = distance(x2, y2, x3, y3);
	double c = distance(x1, y1, x3, y3);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	vector<int>x;
	vector<int>y;
	//x[0],y[0] - координаты первой точки
	int N; cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x1, y1;
		cin >> x1 >> y1;
		x.push_back(x1);
		y.push_back(y1);
	}
	double min_square = 0;
	for (int i = 0; i<N-2;i++)
	{
		for (int j = i+1;j<N-1;j++)
		{
			double current_square = square_of_triagle(x[i], y[i], x[j], y[j], 0, 0);
			if (current_square < min_square || min_square == 0)
			{
				min_square = current_square;
			}
		}
	}
	cout << min_square;
	return 0;
}