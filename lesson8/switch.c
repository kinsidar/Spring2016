#include <stdio.h>

int main () {

   /* local variable definition */
   char grade;
   printf("Enter a grade: ");
   scanf("%c", &grade);

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break; /*notice the break */
      case 'B' :
      case 'C' : /*notice NO break */
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }


   return 0;
}
