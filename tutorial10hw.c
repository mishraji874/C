#include <stdio.h>
int main(int argc, char const *argv[])
{
     int sub;

     printf("We are distributing gifts to the toppers of the class.\n");
     printf("Enter 1, 2 & 3 as per your passed subject.\n");
     printf("Enter 1 for maths.\n");
     printf("Enter 2 for science.\n");
     printf("Enter 3 for maths and science both\n");

     scanf("%d", &sub);

     // printf("you have entered %d as your age\n", age);

     if (sub >= 4)
     {
          printf("Sorry! You did not passed any exam.\n");
          printf("Best of luck for next time..\n");
     }

     else if (sub >= 3)
     {
          printf("Congratulations! you have passed the exam of maths & science.\n");
          printf("We are giving you the gift of 45 rupees.\n");
     }
     else if (sub >= 2)
     {
          printf("Congratulations! you have passed the exam of science.\n");
          printf("We are giving you the gift of 15 rupees.\n");
     }
     else if (sub >= 1)
     {
          printf("Congratulations! you have passed the exam of maths.\n");
          printf("We are giving you the gift of 15 rupees.\n");
     }

     return 0;
}