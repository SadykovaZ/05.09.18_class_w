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
int fore_array(int *p, int n)
{
	int n, m;
	cin >> n;
	
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
	else if (n==2)
	{
		//1.	Напишите функцию для обращения одномерного массива в N-мерный. Должны выполняться соответствующие проверки.
		srand(time(NULL));
		int *p, **arr;
		int n , arr_size;
		cin >> n ;
		p = new int[n];

		
		for (int i = 0; i < n; i++)
		{
			p[i] = 1 + rand() % 10;
			cout << setw(3) << p[i];
		}
		cout << endl;
		

		
	}

}
