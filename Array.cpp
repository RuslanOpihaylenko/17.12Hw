#include "Array.h"
#include <iostream>
#include "initializer_list"

using namespace std;

Array::Array(initializer_list<int> list)
{
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
	}
}

Array& Array::GetSize(initializer_list<int> list)
{
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		size++;
	}
	cout<< size << endl;
}

void Array::SetSize(int size, int grow)
{

}

Array& Array::GetUpperBound(initializer_list<int> list, int size)
{
	int mysize = 1;
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		mysize++;
	}
	cout << mysize << endl;
}

void Array::IsEmpty(int size)
{
	if (size == 0)
	{
		cout << "Array is empty!" << endl;
	}
}

void Array::FreeExtra(initializer_list<int> list, int size, int counter)
{
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		counter++;
		if (counter < this->size)
		{
			this->size - counter;
		}
	}
}

void Array::RemoveAll(int* arr)
{
	delete[] arr;
}

void Array::GetAt(initializer_list<int> list, int n)
{
	int mysize = 1;
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		mysize++;
		if (arr[mysize]==arr[n])
		{
			cout << arr[mysize] << endl;
		}
	}
}

void Array::SetAt(initializer_list<int> list, int n)
{
	int mysize = 1;
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		mysize++;
		if (arr[mysize] == arr[n])
		{
			arr[mysize] = arr[n];
			cout << arr[mysize] << endl;
		}
	}
}

Array& Array::operator[](const Array& obj)
{
	
}

void Array::Add(initializer_list<int> list, int n)
{
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		if (arr[*x] != n)
		{
			arr[*x] = n;
			cout << arr[*x] << endl;
		}
	}
}

Array& Array::operator=(const Array&)
{
	for (int i = 0;i < size;i++)
	{
		if (arr[i] != arr[i + 1])
		{
			arr[i] = arr[i + 1];
		}
	}
}

void Array::InsertAt(initializer_list<int> list, int n)
{   
	int mysize = 1;
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		mysize++;
		if (arr[mysize] != arr[n])
		{
			arr[mysize] = arr[n];
			cout << arr[mysize] << endl;
		}
	}
}

void Array::RemoveAt(initializer_list<int> list, int n)
{
	int mysize = 1;
	arr = new int[list.size()];
	for (auto x = list.begin(); x != list.end();x++)
	{
		*arr = *x;
		arr++;
		mysize++;
		if (arr[mysize] != arr[n])
		{
			cout << arr[mysize] << endl;
		}
	}
}

Array::~Array()
{
	delete[];
}
