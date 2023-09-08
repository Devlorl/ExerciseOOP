#pragma once
#include <iostream>
#include <vector>

using namespace std;

typedef bool (*Compfunc)(int, int);

class Array {
public:
	Array() {};
	Array(int s) : size(s) {
		cout << "Created array successfully!\n";
	};
	~Array() {};
	//Get infor
	void Input();
	void Output();
	//Selection
	int get_Size();
	int get_Element(int);

	//Search
	int linear_Search(int);
	int binary_Search(int);
	int interpolation_Search(int);

	void Swap(int&, int&);
	bool Ascending(int, int);
	bool Descending(int, int);

	//Sort
	void selection_Sort(Compfunc Sort);
	void insertion_Sort(Compfunc Sort);
	void bubble_Sort(Compfunc Sort);
	void quick_Sort(int, int, bool, Compfunc Sort);
	void heap_Sort(Array& a, bool);
	void shell_Sort(Array& a, bool);
	void radix_Sort(Array& a, bool);

protected:
	void heapify(Array& a, int, int, bool);
	int findMax(Array& a);
private:
	int a[100];
	int size;
};

//Select the search type
void search_Location(Array a, int, const string&);
//Select the sort type
void sort_Array(Array& a, const string&, const string&);