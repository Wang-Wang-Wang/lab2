// EloRatingSystem.h
#include<iostream>
#include<cmath>
using namespace std;
class EloRatingSystem{

public:

void setK(int tt_K);
void setRA(int tt_RA,int tt_RB,int tt_K,double tt_score);
void setRB(int tt_RA,int tt_RB,int tt_K,double tt_score);
void setEA(int tt_RA,int tt_RB);
void setEB(int tt_RA,int tt_RB);

int getRA(void);
int getRB(void);
//double getnotrounded_RA(void);
//double getnotrounded_RB(void);

double EA;
double EB;

int a;
int b;

int testA;
int testB;

double power10A;
double power10B;

double powerA;
double powerB;

//double notrounded_RA;
//double notrounded_RB;

private:

int t_RA;
int t_RB;
int t_K;
int t_score;

};
