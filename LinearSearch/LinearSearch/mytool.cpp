#include "mytool.h"

//�㷨my_input
//���룺nΪһ�����ȣ�arrΪ�������͵�ָ��
//�������̬����arr������Ϊn
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

//�㷨my_output
//���룺n��Ԫ�ص�����arr���±��1��ʼ
//��������arr�����Ԫ��
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