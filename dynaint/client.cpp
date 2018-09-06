#include"Array.h"
void main()
{
	char ch;
	Array *a = new Array;
	do
	{
		//Array *a = new Array;
		a->accept();
		a->display();
		cout << "more?";
		cin >> ch;
	} while (ch == 'y');
	a->display();
	delete a;
	_getch();
}