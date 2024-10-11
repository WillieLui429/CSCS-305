#include <iostream>
#include<iomanip>
#include "Job_Class.cpp"
#include <cstdlib >

void Next_Fit(int jsize[], int NumJob, int psize[], int Numpart)
{
	Partition partlistnf[15];
	Job joblistnf[15];
	for (int i = 0; i < NumJob; i++)
	{
		joblistnf[i].id = i;
		joblistnf[i].size = jsize[i];
	}
	for (int j = 0; j < Numpart; j++)
	{
		partlistnf[j].id = j;
		partlistnf[j].size = jsize[j];
	}
	int last = 0;
	for (int i = 0; i < NumJob; i++)
	{
		for (int j = last; j < Numpart; j++)
		{
			if (partlistnf[j].Available = false)
			{
				continue;
			}
			else if (partlistnf[j].jobid < 0)
			{
				continue;
			}
			else if (joblistnf[i].size <= partlistnf[j].size)
			{
				if (partlistnf[j].Available = true)
				{
					partlistnf[j].jobid = joblistnf[i].id;
					joblistnf[i].partid = partlistnf[j].id;
					partlistnf[j].Available = false;
					last = j;
					break;

				}
				else if (partlistnf[j].Available = false)
				{
					continue;
				}
			}
		}

	}
	cout << setw(40) << "Next Fit Results" << endl;
	cout << setw(15) << "Job ID" << setw(20) << "Partition Id" << setw(15) << "Job Size" << setw(15) << "Partition Size" << setw(15) << "Waste" << setw(10) << "Status" << endl;
	for (int k = 0; k < NumJob; k++)
	{
		int part = joblistnf[k].partid;
		cout << setw(15) << joblistnf[k].id << setw(20) << joblistnf[k].partid << setw(15) << joblistnf[k].size << setw(15) << partlistnf[part].size << setw(15) << partlistnf[part].size - joblistnf[k].size << setw(10) << joblistnf[k].status << endl;
	}
}