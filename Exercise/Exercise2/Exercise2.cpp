#include "Array.h"

int main() {
	cout << "Name: Dinh Duc\t\t Class: 22T_DT2\n";
	cout << "MSSV: 102220098\n\n";
	int s;
	cout << "Enter the size of Array: ";
	cin >> s;

	//Initialize array with size s
	Array a(s);

	//Get inforation of array
	a.Input();
	cout << "\nArray is:\n";
	a.Output();

	//Get size of array
	cout << "\n\nSize of array is: " << a.get_Size();

	//Get element
	int e;
	cout << "\n\nEnter the number you want to search: ";
	cin >> e;
	if (a.get_Element(e) != -1) {
		cout << "\nFind the number " << e << " in the array!\n";
	}
	else {
		cout << "\nNumber " << e << " was not found in the array!\n";
	}

	//Search method
	int l;
	cout << "\nEnter the position of the element you want to find in the array: ";
	cin >> l;

	search_Location(a, l, "Linearsearch");	// Search by Linear search

//	search_Location(a, l, "Binarysearch");	// Search by Binary search

//	search_Location(a, l, "Interpolationsearch");	// Search by Interpolation search

	//Sort method
	sort_Array(a, "Selectionsort", "Descending");	// Descending with Selection sort
	cout << "\n\nArray after Descending with Selection sort is:\n";
	a.Output();

	sort_Array(a, "Insertionsort", "Ascending");	// Ascending with Insertion sort
	cout << "\n\nArray after Ascending with Insertion sort is:\n";
	a.Output();

	sort_Array(a, "Bubblesort", "Descending");	// Descending with Bubble sort
	cout << "\n\nArray after Descending with Bubble sort is:\n";
	a.Output();

	sort_Array(a, "Quicksort", "Ascending");	// Ascending with Quick Sort
	cout << "\n\nArray after Ascending with Quick sort is:\n";
	a.Output();

	sort_Array(a, "Heapsort", "Ascending");	// Ascending with Heap sort
	cout << "\n\nArray after Ascending with Heap sort is:\n";
	a.Output();

	sort_Array(a, "Shellsort", "Descending");	// Descending with Shell sort
	cout << "\n\nArray after Descending with Shell sort is:\n";
	a.Output();

	sort_Array(a, "Radixsort", "Ascending");	// Ascending with Radix sort
	cout << "\n\nArray after Ascending with Radix sort is:\n";
	a.Output();

	return 0;
}