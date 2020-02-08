#include <iostream>
#include <vector>
using namespace std;

struct dot
{
	int x;
	int y;
};

struct rectangle
{
	int height;
	int width;

	int perimeter()
	{
		return height * 2 + width * 2;
	}

	vector<dot> find_dots()
	{
		vector<dot>dots_of_rectangle;
		dot one = { 0,0 };
		dot two = { 0,width };
		dot three = { height,0 };
		dot four = { height,width };
		dots_of_rectangle.push_back(one);
		dots_of_rectangle.push_back(two);
		dots_of_rectangle.push_back(three);
		dots_of_rectangle.push_back(four);
		return dots_of_rectangle;
	}
	
};

//int perimeter(rectangle a)
//{
//	return a.height * 2 + a.width * 2;
//}

int main()
{
	rectangle Example = { 2,4 };
	cout <<"Perimeter: "<< Example.perimeter()<<endl;
	vector<dot>ExampleDots = Example.find_dots();
	for (int i = 0; i<ExampleDots.size();i++)
	{
		cout << "x: " << ExampleDots[i].x << " y: " << ExampleDots[i].y << endl;
	}
	return 0;
}