#include "mytool.h"

//算法my_input
//输入：n为一个长度，arr为整型类型的指针
//输出：动态数组arr，长度为n
void my_input(int& n, int* &arr) {
	//input
	cout << "------------------input begin-----------------------" << endl;
	if (arr != 0) delete[] arr;
	cout << "please enter n:";
	cin >> n;
	while (1) {
		if (n < 1) {
			cout << "error!please enter n again:";
			cin >> n;
		}
		break;
	}
	arr = new int[n + 1];
	cout << "please enter data:";
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	cout << endl;
	cout << "-----------------------input end--------------------" << endl;
}

//算法my_output
//输入：n个元素的数组arr，下标从1开始
//输出：输出arr数组的元素
void my_output(int& n, int* &arr) {
	//output
	cout << "----------------------output begin------------------" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	cout << "---------------------output end-------------------" << endl;
	system("pause");
}