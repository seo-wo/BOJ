#include <iostream>

int get_gcd(int x, int y)
{
  int temp(0);

  while (y > 0)
  {
    temp = x;
    x = y;
    y = temp % y;
   }
  return (x);
}

int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int x(0),y(0);
  int gcd(0), lcm(0);
  std::cin >> x >> y;
  gcd = get_gcd(x, y);
  if (gcd != 0)
      lcm = (x * y) / gcd;
  std::cout << gcd << '\n' << lcm;
  return (0);
}