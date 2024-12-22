#pragma once
class Array
{
private:
	int* arr;
	int size;
	int grow;
public:
	Array(initializer_list<int> list);
	Array& GetSize(initializer_list<int> list);
	void SetSize(int size, int grow);
	Array& GetUpperBound(initializer_list<int> list,int size);
	void IsEmpty(int size);
	void FreeExtra(initializer_list<int> list, int size, int);
	void RemoveAll(int* arr);
	void GetAt(initializer_list<int> list, int);
	void SetAt(initializer_list<int> list, int);
	Array& operator[](const Array& obj);
	void Add(initializer_list<int> list, int);
	Array& operator=(const Array&);
	void InsertAt(initializer_list<int> list, int);
	void RemoveAt(initializer_list<int> list, int);
	~Array();
};

