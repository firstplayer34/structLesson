#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct dot
{
	int x;
	int y;
};

double distance(dot A, dot B);
double square_of_triangle(dot A, dot B, dot C);

int main()
{
	vector<dot>input_dots;
	int N; cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x1, y1;
		cin >> x1 >> y1;
		dot temp = {x1,y1};
		input_dots.push_back(temp);
	}
	dot Zero = { 0,0 };
	double min_square = 0;
	for (int i = 0; i<N;i++)
	{
		for (int j = i+1;j<N-1;j++)
		{
			double current_square = square_of_triangle(input_dots[i], input_dots[j], Zero);
			if (current_square < min_square || min_square == 0)
			{
				min_square = current_square;
			}
		}
	}
	cout << min_square;
	return 0;
}

double distance(dot A, dot B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y,2));
}

double square_of_triangle(dot A, dot B, dot C)
{
	double a = distance(A, B);
	double b = distance(B, C);
	double c = distance(A, C);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}