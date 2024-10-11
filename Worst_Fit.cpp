#include<iostream>
#include<iomanip>
#include"Memory_Management.h"
#include"Job_Class.cpp"
using namespace std;

void Worst_Fit_Dynamic(int jsize[], int NumJob, int psize[], int Numpart)
{
	Partition partlist[15];
	Job joblist[15];
	for (int i = 0; i < NumJob; i++)
	{
		joblist[i].id = i;
		joblist[i].size = jsize[i];
	}
	for (int j = 0; j < Numpart; j++)
	{
		partlist[j].id = j;
		partlist[j].size = jsize[j];
	}
	cout << setw(40) << "Worst Fit(Dynamic) Results" << endl;
	cout << setw(15) << "Job ID" << setw(20) << "Partition Id" << setw(15) << "Waste" << setw(10) << "Status" << endl;
}