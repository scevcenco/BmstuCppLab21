// lab21_ver1.cpp : Defines the entry point for the console application.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void main()
{
	int n = 4, m = 3, i, j;
	int count = 0;
	int b[4][3];
	cout << "Matrix B(4,3):\n\n";
	srand(unsigned(time(0)));                           
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			b[i][j] = rand() % 100 - rand() % 100;     //randomizes matrix 
			cout << b[i][j] << " ";                    //prints Â(4,3)
		}
		cout << endl;
	}
	int a[12];
	int k = 0;
	for (i = 0; i < n; i++)                      //finds negative elements in B		                              
	{                                            
		for (j = 0; j < m; j++)
		{
			if (b[i][j] < 0)
			{
				a[k] = b[i][j];                   //puts them to vector A
				k++;
			}
		}
	}
	cout << "\nVector A:(";
	for (i = 0; i < k; i++)
		cout << a[i] << " ";                      //prints A
	cout << ")\n";
	cout << "\nAdresses of numbers with simple division by 5: ";
	for (i = 0; i < k; i++)
	{
		if ((a[i] % 5) == 0)                    //finds simple division by 5
		{
			count++;                             //counts a[i]%5
			cout << &a[i] << " ";                //prints adresses                                
		}
	}
	cout << "\n\nSimple division by 5 is possible for " << count << " numbers\n" << endl;
	system("pause");
}
