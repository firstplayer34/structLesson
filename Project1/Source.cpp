#include <iostream>
#include <vector>
using namespace std;

/*
 * struct <�������� ���������>{
 *		<��� ��������� 1> <�������� ��������� 1> [<�������� �� ���������>]
 *		...
 * };
 */

struct car
{
	int number;
	string mark = "Opel";
	int number_of_doors;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	car first;
	first.number = 123;
	car second;
	second.mark = "Volvo";
	second.number = 123;
	cout << "����� ������ ������: "<< first.number << endl;
	cout << "����� ������ ������: " << first.mark << endl;
	cout << "����� ������ ������: "<< second.number << endl;
	cout << "����� ������ ������: " << second.mark << endl;
	return 0;
}