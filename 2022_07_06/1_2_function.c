#include<stdio.h>

// function declaration
float circleArea(float r);

const float PI = 3.14; // global constant

int main()
{
  float radius, area;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = circleArea(radius); //function call
  printf("Area of circle = %.2f\n",area);

  return 0;
}

// function definition
float circleArea(float r)
{
  float area = PI * r * r;
  return area; // return statement
}