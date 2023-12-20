
#include <bits/stdc++.h>

using namespace std;

void func(int a)
{
  cout << "value is: " << a << endl;
}


void func2(int a)
{
  cout << "a*a is: " << a*a << endl;
}

void (*f[3])(int);



int main()
{
  int i = 7;
  func(i);

  f[0] = func;
  f[0](9);

  f[1] = func2;
  f[1](8);

  return 0;
}
