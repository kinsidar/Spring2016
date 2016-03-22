#include <stdio.h>

int   a = 1, b = 2, c = 3;           /* global variables */
int   f();                       /* function prototype */
int   h();

int main()
{
   h();
   printf("%d\n", f());             /* 12 is printed */
   printf("%d%d%d\n", a, b, c);     /*  4  2  3 is printed */

   printf("%d", h());
   return 0;
}

int h()
{
    static z = 1;
    return z++;
}


int f()
{
   int   b, c;                       /* b and c are local */
                                     /* global b, c are masked */
   a = b = c = 4;
   return (a + b + c);
}
