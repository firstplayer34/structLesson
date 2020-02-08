#include <iostream>
#include <vector>
using namespace std;

/*
 * struct <название структуры>{
 *		<тип параметра 1> <название параметра 1> [<значение по умолчанию>]
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
	cout << "Ќомер первой машины: "<< first.number << endl;
	cout << "ћарка первой машины: " << first.mark << endl;
	cout << "Ќомер второй машины: "<< second.number << endl;
	cout << "ћарка второй машины: " << second.mark << endl;
	return 0;
}