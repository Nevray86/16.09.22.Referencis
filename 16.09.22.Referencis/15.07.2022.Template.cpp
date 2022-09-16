
#include <iostream>
using namespace std;

int mx[10][2];

template <typename T>
void show_arr(T arr[], const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int* pnum1, int* pnum2) {
	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

template <typename T>
void refswap(T &refnum1, T &refnum2) {
	T tmp = refnum1;
	refnum1 = refnum2;
	refnum2 = tmp;
}

int& func(int index) {
	return mx[index][1];
}

template <typename T>
int& ref_max(T arr[], const int lenght) {
	T max = 0;
	for (int i = 1; i < lenght; i++)
		if (arr[i] > arr[max])
			max = i;
	return arr[max];
}

//������ 1
template <typename T>
void two_var(T &num1, T &num2);

//������ 2
template <typename T1, typename T2>
void copy_arr(T1 arr1[], const int length1, T2 arr2[], const int length2);


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;
	
	//������ 1
	/*cout << "������ 1. ������� ��� �����: ";
	cin >> n >> m;
	two_var(n, m);
	cout << "n = " << n << endl;
	cout << "m = " << m << "\n\n";*/

	//������ 2. ����������� ��������
	cout << "������ 2.\n������ ������:\n";
	const int size1 = 5;
	const int size2 = 7;
	int arr1[size1]{ 5,6,2,-4,1 };
	int arr2[size2]{};
	show_arr(arr1, size1);
	copy_arr(arr1, size1, arr2, size2);
	cout << "������ ������:\n";
	show_arr(arr2, size2);






	/*int arr_max[5]{4, 6, -5, 10, -11};

	cout << "����������� ������:\n";
	show_arr(arr_max, 5);
	cout << "�������� = " << ref_max(arr_max, 5) << endl;

	ref_max(arr_max, 5) = 0;
	ref_max(arr_max, 5) = 0;
	cout << "�������� ������:\n";
	show_arr(arr_max, 5);*/

	/*for (int i = 0; i < 10; i++) {
		cout << "������� �����: ";
		cin >> mx[i][0];
		func(i) = mx[i][0];
	}
	cout << "�������� ������:\n";
	for (int i = 0; i < 10; i++)
		cout << mx[i][0] << '\t' << func(i) << '\n';*/

	//SWAP
	/*my_swap(n, m);// �� ��������
	cout << n << ' ' << m << endl;

	n = 10; m = 15;
	pswap(&n, &m);//��������, �� �� ������
	cout << n << ' ' << m << endl;

	n = 10; m = 15;

	refswap(n, m);
	cout << n << ' ' << m << endl;*/

	//����������� ���������
	//int* pn;

	//������ ��� ��������� � ������������������ ���������
	//cout << pn << endl;

	//������ ������ ������������ ������. ������ - ������������� ������ ���� ������ int
	/*pn = 0;

	pn = &n;
	if (pn)
		cout << *pn << endl;
	else
		cout << "��������� �� ���������������.\n";*/

	//������ ������
	//pn = NULL; //��������� �� �� �����

	//������ ������ - ����������
	/*pn = nullptr;
	if (pn == nullptr)
		cout << "��������� �� ���������������\n";
	else
		cout << pn << endl;*/

	//��������� �� ���������. ������ ������ �������� �������, ��������� ������������� ���������
	//const ������� ����� ���� ������
	/*int const* pn;
	pn = &n;
	//*pn = 5; // ������*/

	//����������� ���������. ������ ������������� �� ������ ������� ������
	//�� ����� ������ ����������
	/*const int* pn = &n;
	// pn = &m; ������*/

	//�o�������� ��������� �� ���������. ������ ������ �������� ������� ����� �������������
	//� ������ �������������� �� ������ ������� ������
	/*const int const* pn = &n;
	//*pn = 5; //error
	//pn = &n; //error*/

	//int mass[5]{};
	//mass = &n; // ������, �� �������� ������� �������� ����������� ����������

	//���������
	/*int* pn = &n;
	cout << *pn << endl; //��� ��������� � ���������� ��������� �������������*/

	//������ - �������������� �������� ����������,
	//���������� ������ � ��� �� ������ ����� ����
	/*int& refm = m;
	refm = 20;
	cout << "����� m = " << m << endl;*/

	return 0;
}

//������ 1
template <typename T>
void two_var(T& num1, T& num2) {
	if (num1 > num2) {
		num1 *= num1; //num1 = pow(num1, 2) ���������� - cmath
		num2 *= num2;
	}
	else {
		num1 = 0; //num{0} (??)
		num2 = 0;
	}

}

//������ 2
template <typename T1, typename T2>
void copy_arr(T1 arr1[], const int length1, T2 arr2[], const int length2) {
	int min_len = length1 < length2 ? length1 : length2;
	for (int i = 0; i < min_len; i++) {
		//arr2[i] = arr1[i];
		*(arr2 + i) = *(arr1 + i);
	}

}