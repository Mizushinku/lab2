#include<iostream>
#include<fstream>
#include<cstdlib>
#include"rank.h"
using namespace std;

int main(void)
{
	int K;
	double RA, RB, S;
	ifstream infile("file.in",ios::in);
	if(!infile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outfile("file.out",ios::out);
	if(!outfile) {
		cerr << "Faileed opening" << endl;
		exit(1);
	}
	infile >> K >> RA >> RB;
	outfile << RA << ' ' << RB << endl;

	while(infile >> S) {
		rank ranks(S,K,RA,RB);
		ranks.cal();
		RA = ranks.getRA();
		RB = ranks.getRB();
		outfile << RA << ' ' << RB << endl;
	}

	return 0;
}
