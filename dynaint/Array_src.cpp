#include"Array.h"


int Array::size = 0;

Array::Array( )
{
	this->ptr = new int[size];
	ptr[size] = 0;
	size++;
	
}
Array::Array(int a)
{
	this->ptr = new int[size];
	ptr[size] = a;
	size++;
}
void Array::accept()
{
	int i;
	cout << "what position do you want to enter";
	cin >> i;
	cout << "enter the number";
	cin >> ptr[i];
	size++;

}
void Array::display()
{
	for (int i = 0; i < size-1; i++)
	{
		cout << ptr[i]<<"\n";
	}
}