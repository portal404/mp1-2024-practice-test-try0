// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  long long ll = a+b;
  if (ll <= INT_MAX && ll >= INT_MIN)
  {
    return a+b;
  }
  else if (ll >= INT_MAX)
  {
    return INT_MAX;
  }
  else
  {
    return INT_MIN;
  }
}
