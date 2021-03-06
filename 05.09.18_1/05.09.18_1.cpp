// 05.09.18_1.cpp: определяет точку входа для консольного приложения.
//
#include"stdafx.h"
#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void fill(int **arr, int n, int m)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 10 + 0;
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
}
void transp(int **&arr, int& n, int& m)
{
	int **tmp = new int*[m];
	for (int i = 0; i < m; i++)
		tmp[i] = new int[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tmp[j][i] = arr[i][j];

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	arr = tmp;
}

void print(int **arr, int n, int m) {

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
}

void arr(int *a, int size) {

	int n, m;
	cin >> n;
	int **tmp;

	if (size % n == 0) {

		tmp = new int*[n];

		m = size / n;

		for (int i = 0; i < n; i++)
		{
			tmp[i] = new int[m];
		}

		int k = 0;
		
		cout << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				tmp[i][j] = a[k++];
				cout << tmp[i][j] << " ";
			}
			cout << endl;
		}

		delete[] a;

		for (int i = 0; i < n; i++)
		{
			delete[] tmp[i];
		}

		delete tmp;
	}
}
int main()
{
	int n = 0;
	cout << "Enter number: ";
	cin >> n;
	if (n == 1)
	{
		//Транспонирование матрицы – это операция, после которой столбцы прежней матрицы становятся строками, а строки столбцами. Напишите функцию транспонирования матрицы.
		int **p;
		int n, m;
		cin >> n >> m;
		p = new int*[n];
		for (int i = 0; i < n; i++)
		{
			p[i] = new int[m];
		}

		fill(p, n, m);
		transp(p, n, m);
		print(p, n, m);
		for (int i = 0; i < m; i++)
		{
			delete[]p[i];
		}
		delete[]p;
	}
	else if (n == 2)
	{
		//1.	Напишите функцию для обращения одномерного массива в N-мерный. Должны выполняться соответствующие проверки.
		srand(time(NULL));
		int *z, size;
		cout << "array size = ";
		cin >> size;

		z = new int[size];

		for (int i = 0; i < size; i++)
		{
			*(z + i) = rand() % 10 + 0;
			cout << *(z + i) << " ";
		}

		cout << endl;
		arr(z, size);
	}

	system("pause");
	return 0;
}
