#include<stdio.h>
int input_n_and_r(int *n , int *r)
{
  printf("Enter values of n\n");
  scanf("%d",n);
  printf("Enter values of r\n");
  scanf("%d",r);
}
int factnCr(int n,int r)
{
  int result=1;
  for(int i=1;i<=r;i++)
  result=result*(n-i+1)/i;
  return result;
}
void output(int n,int r,int result)
{
  printf("Value of %dC%d = %d\n",n,r,result);
}
int main()
{
  int n,r;
  input_n_and_r(&n,&r);
  int result=factnCr(n,r);
  output(n,r,result);
  return 0;
}
