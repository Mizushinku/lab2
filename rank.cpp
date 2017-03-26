#include"rank.h"
	rank::rank(double s, int k, double ra, double rb) {
		setinit(s,k,ra,rb);
	}
	void rank::setinit(double s, int k, double ra, double rb) {
		S = s; K = k; RA = ra; RB = rb;
	}
	void rank::cal() {
		EA = 1/(1+pow(10,(RB-RA)/400));
		EB = 1/(1+pow(10,(RA-RB)/400));
		RAp = RA + K*(S - EA);
		RBp = RB + K*((1-S) - EB);
	}
	int rank::getRA() {
		return (int)(RAp + 0.5);
	}
	int rank::getRB() {
		return (int)(RBp + 0.5);
	}
