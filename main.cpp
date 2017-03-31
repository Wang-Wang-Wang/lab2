// EloRatingSystem main.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "EloRatingSystem.h"
using namespace std;
int main(){

int K,RA,RB;
double score;

EloRatingSystem eloratingsystem;

ifstream inFile("file.in", ios::in);
inFile >> K >> RA >> RB;

ofstream outFile("file.out", ios::out);
outFile << RA << "\t" << RB << endl; 

while(inFile >> score){

  //eloratingsystem.setK(K);
  eloratingsystem.setEA(RA,RB);
  eloratingsystem.setEB(RA,RB);
  eloratingsystem.setRA(RA,RB,K,score);
  eloratingsystem.setRB(RA,RB,K,score);
  RA=eloratingsystem.a;
  RB=eloratingsystem.b;

  outFile << RA << "\t" << RB /*<< "\t" << eloratingsystem.EA << "\t"
          << eloratingsystem.powerA << "\t" << eloratingsystem.power10A << "\t" << eloratingsystem.EB << "\t"
          << eloratingsystem.powerB << "\t" << eloratingsystem.power10B << "\t" << score << "\t"
          << eloratingsystem.testA << "\t" << eloratingsystem.testB*/ <<endl;



}

return 0;

}
