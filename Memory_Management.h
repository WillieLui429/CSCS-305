#include <iostream>
#include<io.h>
#include<Windows.h>
#include<iomanip>
#include "Job_Class.cpp"
#include"First_Fit.cpp"
#include"Best_Fit.cpp"
#include"Next_Fit.cpp"
#include"Worst_Fit.cpp"
#include <cstdlib >
using namespace std;



void main()
{
	int Numjob;
	cout << "Enter the number of jobs:", cin >> Numjob;
	int jsize[15];
	cout << "Enter the size of each job:" << endl;
	for (int i = 0; i < Numjob; i++)
	{
		cout << "Job " << i << " = ", cin >> jsize[i];
	}
	int Numpart;
	cout << "Enter the number of Partitions:", cin >> Numpart;
	int psize[15];
	for (int j = 0; j < Numpart; j++)
	{
		cout << "Partition " << j << " = ", cin >> psize[j];
	}
	int choice;
	cout << "Enter your choice" << endl;
	cout << "1) First Fit" << endl;
	cout << "2) Next Fit" << endl;
	cout << "3) Best Fit" << endl;
	cout << "4) Worst Fit (dynamic)" << endl;
	cout << "Choice: ", cin >> choice;
	if (choice == 1)
	{
		First_Fit(jsize,Numjob,psize,Numpart);
	}
	else if (choice == 2)
	{
		Next_Fit(jsize, Numjob, psize, Numpart);
	}
	else if (choice == 3)
	{
		Best_Fit(jsize, Numjob, psize, Numpart);
	}
	else if (choice == 4)
	{
		Worst_Fit_Dynamic(jsize, Numjob, psize, Numpart);
	}
	else
	{
		cout << "There was an error" << endl;
	}
}


