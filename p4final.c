#include <stdio.h>
int input_degree()
{
  
}
float input_x()
{
  
}
float evaluate_polynomial(int n, float a[n], float x)
{
  float result=f[n-1];
  for(i=n-1;i>0;i--)
    {
      result=result*x;
      result=result*f[i-1];
    }
  return result;
}
void out_put(int n, float a[n], float x, float result)
{
  
}