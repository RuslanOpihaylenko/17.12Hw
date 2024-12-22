#include "Array.h"
#include <iostream>

using namespace std;

void main()
{
	int size = 5;
	int grow = 0;
	Array my_array1 = { 1,2,3 };
	Array my_array2 = { 1,2,3 };
	my_array1.GetSize(my_array1);
	my_array2.GetSize(my_array2);
	my_array1.SetSize(size,grow);
	my_array2.SetSize(size, grow);
	my_array1.GetUpperBound(my_array1,size);
	my_array2.GetUpperBound(my_array2,size);
	my_array1.IsEmpty(size);
	my_array2.IsEmpty(size);
	my_array1.FreeExtra(my_array1, size, 3);
	my_array2.FreeExtra(my_array2, size, 3);
	my_array1.RemoveAll(my_array1);
	my_array2.RemoveAll(my_array2);
	my_array1.GetAt(my_array1, 3);
	my_array2.GetAt(my_array2, 3);
	my_array1.SetAt(my_array1, 3);
	my_array2.SetAt(my_array2, 3);
	my_array1.Add(my_array1, 3);
	my_array2.Add(my_array2, 3);
	my_array1.operator=(my_array2);
	my_array1.InsertAt(my_array1, 3);
	my_array2.InsertAt(my_array2, 3);
	my_array1.RemoveAt(my_array1, 3);
	my_array2.RemoveAt(my_array2, 3);
}