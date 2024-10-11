#include <iostream>
#include<iomanip>
#include <cstdlib >
#include"Job_Class.cpp"
using namespace std;

void Best_Fit(int jsize[], int NumJob, int psize[], int Numpart)
{
	Partition partlistbf[15];
	Job joblistbf[15];
	for (int i = 0; i < NumJob; i++)
	{
		joblistbf[i].id = i;
		joblistbf[i].size = jsize[i];
	}
	for (int j = 0; j < Numpart; j++)
	{
		partlistbf[j].id = j;
		partlistbf[j].size = jsize[j];
	}
	cout << setw(40) << "Best Fit Results" << endl;
	cout << setw(15) << "Job ID" << setw(20) << "Partition Id" << setw(15) << "Waste" << setw(10) << "Status" << endl;
	int holder = 0;
	int position;
}