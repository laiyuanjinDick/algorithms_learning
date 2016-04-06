#include <iostream>
#include "mytool.h"
using namespace std;
//算法LinearSearch
//输入：n个元素的数组A和元素x
//输出：如果A[j]==x,1<=j<=n，则输出j，否则，输出0
int LinearSearch(int A[], int n, int x) {
	int j = 1;
	while (j < n && A[j] != x) {
		++j;
	}
	if (A[j] == x) return j;
	return 0;
}

int main() {
	int* arr = 0;
	int n;
	my_input(n, arr);

	int x = 0;
	cout << "enter a number you want to find:";
	cin >> x;
	cout << "LinearSearch begin:" << endl;
	int j = LinearSearch(arr, n, x);
	if (j != 0) {
		cout << "A[" << j << "]=" << arr[j] << endl;
	}
	else {
		cout << x << " cannot find!" << endl;
	}


	my_output(n, arr);
	return 0;
}