#include <stdio.h>

typedef struct student {
   int roll;
   int marks;
}student;

int main() {
   student s;
   
   // Initialize struct variables
   s.roll;
   s.marks;
   
   printf("Enter roll : ");
   scanf("%d", &s.roll);

   getchar();

   printf("Enter marks : ");
   scanf("%d", &s.marks);

   // Access struct variables using dot operator
   printf("Roll number: %d\n", s.roll);
   printf("Marks: %d\n", s.marks);

   return 0;
}
