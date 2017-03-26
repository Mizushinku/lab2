#ifndef _RANK_
#define _RANK_

#include<cmath>
using namespace std;
class rank {
public :
	rank(double s, int k, double ra, double rb);
	void setinit(double s, int k, double ra, double rb);
	void cal();
	int getRA();
	int getRB();
private :
	int K;
	double S, RA, RB, EA, EB, RAp, RBp;
};

#endif
