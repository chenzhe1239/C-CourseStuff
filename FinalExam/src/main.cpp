#include <iostream>
#include <thread>
#include "NEU.h"
#include "SolutionsFinalExam.h"
using namespace std;

int main() {
	NEU *neu = new NEU();
	string EmployeeCSV = "1,Dan,Peters,17,45.65,2,Kal,Bugrara,19,35.70,3,Yusuf,Ozbek,18,40.25,4,Jane,Smith,16,50.35";

	auto *answer = new SolutionsFinalExam;
	answer->controllingThreads();
	//output  Aa Bb Cc  Dd  Ee  Ff  Gg  Hh  Ii  Jj  Kk  Ll  Mm  Nn  Oo  Pp  Qq  Rr  Ss  Tt  Uu  Vv  Ww  Xx  Yy  Zz

	delete neu;
	return 0;

}
