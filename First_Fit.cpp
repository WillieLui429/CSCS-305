#include<iostream>
#include<iomanip>
#include"Job_Class.cpp"
using namespace std;

void First_Fit(int jsize[], int NumJob, int psize[], int Numpart)
{
	Partition partlistff[15];
	Job joblistff[15];
	for (int i = 0; i < NumJob; i++)
	{
		joblistff[i].id = i;
		joblistff[i].size = jsize[i];
	}
	for (int j = 0; j < Numpart; j++)
	{
		partlistff[j].id = j;
		partlistff[j].size = jsize[j];
	}

	for (int i = 0; i < NumJob; i++)
	{
		cout << joblistff[i].id << " " << joblistff[i].size << endl;
		for (int j = 0; j < Numpart; j++)
		{
			cout << partlistff[j].id << " " << partlistff[j].size << endl;
			if (partlistff[j].Available = false)
			{
				continue;
			}
			else if (partlistff[j].jobid > -1)
			{
				continue;
			}
			else if (partlistff[j].jobid = -1 && joblistff[i].size <= partlistff[j].size)
			{
				partlistff[j].jobid = joblistff[i].id;
				joblistff[i].partid = partlistff[j].id;
				joblistff[i].status = "Running";
				partlistff[j].Available = false;
				break;
			}
			else if (partlistff[j].size > joblistff[i].size)
			{
				continue;
			}


		}
	}
	cout << setw(40) << "First Fit Results" << endl;
	cout << setw(15) << "Job ID" << setw(20) << "Partition Id" << setw(15) << "Job Size" << setw(15) << "Partition Size" << setw(15) << "Waste" << setw(10) << "Status" << endl;
	for (int k = 0; k < NumJob; k++)
	{
		int part = joblistff[k].partid;
		cout << setw(15) << joblistff[k].id << setw(20) << joblistff[k].partid << setw(15) << joblistff[k].size << setw(15) << partlistff[part].size << setw(15) << partlistff[part].size - joblistff[k].size << setw(10) << joblistff[k].status << endl;
	}
}