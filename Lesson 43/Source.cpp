#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
template<typename T > void showArr(T arr[], int length);

void mySwap(int n,int m) {
	int tmp = n;
	n = m;
	m = tmp;
}
void pSwap(int*pn,int*pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
// Задача 1
void fillArr(int arr[], int length, int min, int max);
void sumArr(int arr[], int length, int *pn);
// Задача 2
void compare(int* pn, int* pm);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1
	cout << "Задача 1.\nИзначальный массив: ";
	int z1[10];
	fillArr(z1, 10, 1, 21);
	showArr(z1, 10);
	sumArr(z1, 10, &n);
	cout << "Сумма всех элементов массива = " << n << "\n\n";

	// Задача 2
	cout << "Задача 2.\nВведите два числа: ";
	cin >> n >> m;
	compare(&n, &m);
	cout << "n = " << n << ", m = " << m << endl;


	cout << "Введите два числа: ";
	cin >> n >> m;
	pSwap(&n, &m);
	cout << "n = " << n << ", m = " << m << endl;

	
	int a = 5, b = 6;
	int* pa = &a;
	cout << pa << " - " << *pa << endl;
	pa = &b;
	cout << pa << " - " << *pa << endl;
	*pa = 10;
	int* pb = &b;

	cout << pa << endl;
	cout << pb << endl;
	cout << &b << endl;

	int x = 5;
	int* px = &x;
	cout << px << endl;
	px += 3;
	cout << px << endl;

	int arr[5] = {1,2,3,4,5};
	//cout << arr << endl;
	//cout << arr[0] << endl;
	for (int i = 0; i < 5; i++)
		cout << *arr + i << " ";
	arr[4];

	int* pa3 = &arr[2]; 
	cout << *(pa3 - 2) << endl;

	return 0;
}

void compare(int* pn, int* pm) {
	if (*pn > *pm) {
		*pn *= *pn;
		*pm *= *pm;
	}
	else {
		*pn = 0;
		*pm = 0;
	}
}
// Задача 1
void sumArr(int arr[], int length, int* pn) {
	*pn = 0;
	for (int i = 0; i < length; i++)
		*pn += *(arr + i);
}
template<typename T > void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";
}
void fillArr(int arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		*(arr + i) = rand() % (max - min);
}
