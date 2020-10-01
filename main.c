/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if((s < 120) && (d < 80) && (s > d)) {
    printf("Normal\n");
  }
  else if((s>119) && (s<130) && (d < 80) && (s>d)) {
      printf("Elevated\n");
  }
  else if ((((s>129)&&(s<130)) || ((d>79) && (d<90))) && (s>d)){
    printf("Stage 1 Hypertension\n");
  }
  else if ((((s>140) && (s<=180)) || ((d>90)&&(s<=180))) && (s>d)) {
    printf("Stage 2 Hypertension\n");
  }
  else if (((s>180) || (d>120)) && (s>d)){
    printf("Hypertensive Crises\n");
  }
  else{
    printf("ERROR");
  }
}
