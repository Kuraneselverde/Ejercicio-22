#include <fstream>
#include <iostream>
#include <random>
#include <cmath>
#include <string.h>
#include <stdlib.h>


using namespace std; 

float mat(float x);
void MCMC(int pasos);


int main()
{
  MCMC(10000);  
  return 0;
}



float mat(float x)
{
  return exp(-(1/2)*pow(x,2));
}

void MCMC(int pasos)
{
  float paso;
  float alpha;
  float ran;  
  float r;
  float x;
  float xn;  
  paso=1;
  x=0.0;
  srand48(20);
  for (int i=0;i<pasos;i++)
  {
    xn=x + 2.0*paso*(drand48()-(1/2));
    alpha=drand48();
    r=mat(xn)/mat(x);
    if (r > 1.0)
    {
      r=1.0;      
    }
    if (alpha < r)
    {
      x=xn;
    }
    cout << x << endl;
  }
}





