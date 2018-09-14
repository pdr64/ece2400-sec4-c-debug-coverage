
#include "utst.h"

int avg( int x, int y )
{
  int sum = x + y;
  return sum / 2;
}

int main()
{
  UTST_BEGIN();

  UTST_ASSERT_INT_EQ( avg(10,20), 15 );

  UTST_END();
  return 0;
}

