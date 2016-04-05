#include <iostream>
using namespace std;

//算法SelectionSortRec
//输入：n个元素的数组A
//输出：按降序排列的数组A
//过程 sort(A,n,i):对A[i...n]排序

void sort(int* A,int n, int i) {
	if (i < n) {
		int k = i;
		int j;
		for (j = i + 1; j <= n; ++j) {
			if (A[j] < A[k])
				k = j;
		}
		if (k != i) {
			int temp = A[i];
			A[i] = A[k];
			A[k] = temp;
		}
		cout << A[i] << " ";
		sort(A, n, i + 1);
	}
}

void SelectionSortRec(int* A, int n) {
	sort(A, n, 1);
}


int main() {
	//input
	cout << "please enter n:";
	int n = 0;
	cin >> n;
	while (1) {
		if (n < 1) {
			cout << "error!please enter n again:";
			cin >> n;
		}
		break;
	}	
	int *arr = new int[n + 1];
	cout << "please enter data:";
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	cout << endl;

	//calculate
	SelectionSortRec(arr, n);
	cout << endl;

	//output
	for (int i = 1; i <= n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	delete[] arr;
	return 0;
}