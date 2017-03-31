// EloRatingSystem.cpp
#include"EloRatingSystem.h"

//void EloRatingSystem::setK(int tt_K){t_K=tt_K;}
void EloRatingSystem::setRA(int tt_RA,int tt_RB,int tt_K,double tt_score){
t_RA=tt_RA;
t_RB=tt_RB;
t_K=tt_K;
t_score=tt_score;
//double notrounded_RA=(double)(t_RA+t_K*(t_score-1/(1+pow(10,(t_RB-t_RA)/400))));
     double notrounded_RA=double(t_RA+t_K*(t_score-EA));

     a=int(notrounded_RA+0.5);

}
void EloRatingSystem::setRB(int tt_RA,int tt_RB,int tt_K,double tt_score){
t_RA=tt_RA;
t_RB=tt_RB;
t_K=tt_K;
t_score=tt_score;
//double notrounded_RB=(double)(t_RB+t_K*(t_score-1/(1+pow(10,(t_RA-t_RB)/400))));
     double notrounded_RB=double(t_RB+t_K*((1-t_score)-EB));

     b=int(notrounded_RB+0.5);

}
void EloRatingSystem::setEA(int tt_RA,int tt_RB){
t_RA=tt_RA;
t_RB=tt_RB;
     powerA=(double)(t_RB-t_RA)/400;testA=t_RB-t_RA;
     power10A=pow(10,powerA);
     EA=1/(1+power10A);
//int t_EA=(int)(EA*10+0.5);EA=(double)t_EA/10;
}
void EloRatingSystem::setEB(int tt_RA,int tt_RB){
t_RA=tt_RA;
t_RB=tt_RB;
     powerB=(double)(t_RA-t_RB)/400;testB=t_RA-t_RB;
     power10B=pow(10,powerB);
     EB=1/(1+power10B);
//int t_EB=(int)(EB*10+0.5);EB=(double)t_EB/10;
}

int EloRatingSystem::getRA(void){
    return a;
}
int EloRatingSystem::getRB(void){
    return b;
}
/*double EloRatingSystem::getnotrounded_RA(void){
    return notrounded_RA;
}
double EloRatingSystem::getnotrounded_RB(void){
    return notrounded_RB;
}*/
