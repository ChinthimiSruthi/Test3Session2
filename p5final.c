#include <stdio.h>
int input_size()
{
  int a;
  printf("Enter the size of an array\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter a number\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
}
int find_largest(int n, int a[n])
{
  int i;
  for(i=1;i<n;++i)
    {
      if(a[0]<a[i])
      {
        a[0]=a[i];
      }
    }
}
void out_put(int n, int a[n], int largest)
{
  printf("Largest element = %d\n",largest);
}
int main()
{
  int n,a,largest;
  n=input_size();
  input_array(n,a);
  find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}