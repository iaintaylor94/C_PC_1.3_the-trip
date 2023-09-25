// Program to calculate the amount of money needed to change hands to spread the cost of a trip evenly

#include <stdio.h>

int main(void) {
  //Get input
  int numStudents = 0;
  printf ("Enter the number of students:  ");
  scanf ("%d", &numStudents);

  printf ("Enter the ammount of money spent by each student:  ");
  double moneyByStudents[numStudents];
  for (int i = 0; i < numStudents; i++) {
    scanf ("%lf", &moneyByStudents[i]);
  }

  //Calculate average cost spent per student
  double totalSpent = 0;
  double average = 0;
  for (int i = 0; i < numStudents; i++) {
    totalSpent += moneyByStudents[i];
  }
  average = totalSpent / numStudents;

  //calculate the amount needed to be moved to share the cost of the holiday
  double amountMoved = 0;
  for (int i =0; i < numStudents; i++) {
    if (moneyByStudents[i] < average) {
      amountMoved += (average - moneyByStudents[i]);
    }
  }

  //Print amount moved
  printf ("%.2lf\n", amountMoved);
  
  return 0;
}