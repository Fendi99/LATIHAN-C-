#include <iostream>
#include <algorithm>

using namespace std;

void show (int a[], int arraysize) {
	for (int i = 0; i < arraysize; i++){
		cout << a[i] << ",";
	}	
}

int main (){
	int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	int asize = sizeof(a)/sizeof(a[0]);

	cout << "\nThe array is: ";
	show(a,asize);

	cout << "\n\nLet's say we want to search for";
	cout << "\n2 in the array so, we first sort the array";
	sort(a,a + asize);
	
	cout << "\n\nThe array after sorting is : ";
	show(a, asize);
 
	cout << "\n\nNow, we do the binary search";
	if(binary_search(a, a + asize, a[1])){
		cout << "\nElement found in the array: " << a[2];
	}else {
		cout << "\nElement not found in the array !"  ;	
	}

	cout << "\n\n" << binary_search(a, a+asize,a[2]) ;		

return 0;
}