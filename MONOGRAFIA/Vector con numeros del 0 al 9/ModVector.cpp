#include<stdlib.h>
#include"Mate.cpp"

int* modN(int *vector, int &n, int newn)
{
  int *temp;
  temp = (int*) malloc(sizeof(int) * newn);
  for (int i = 0; i < n && i < newn; i++)
  {
    temp[i] = vector[i];
  }
    n = newn;
    free(vector);
    return temp;
}

int calcuN(int *ing, int size)
{
  int temp = 0;
  for (int i = 0; i < size; i++)
  {
    temp = temp + (ing[i] * power(10,size-1-i));
  }
  return temp;
}
