/* log2 example */
#include <iostream>      /* printf */
#include <math.h>       /* log2 */

using namespace std;

int main ()
{
  double param, result;
  cin>>param;
  result = log2 (param);
  cout << (int)result<<endl;
  return 0;
}