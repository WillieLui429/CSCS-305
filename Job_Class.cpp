#include<iostream>
using namespace std;
struct Job
{
public:
	static int id;
	static int size;
	static int partid;
	string status = "Waiting";
};

struct Partition
{
public:
	static int id;
	static int size;
	int jobid = -1;
	bool Available = true;

};