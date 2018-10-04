int power(int a, int b)
{
  int temp = a;
  for (int i = 1; i < b-1; i++)
  {
    temp = temp * a;
  }
  if (b == 0) temp = 1;
  return temp;
}
