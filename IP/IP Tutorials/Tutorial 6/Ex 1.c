#include <stdio.h>
#include <assert.h>
#include <math.h>

  //Function declaration
float circleArea(float radius_circle);

int main() 
{
    float radius;
 
    // take radius as input
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    
    assert(fabs( circleArea(7) - 153.86) < 0.001);
    

    printf("Area of circle : %.2f", circleArea(radius));
    printf("\n");

   return 0;
}

// function definition to calculate area of circle
float circleArea(float radius_circle)
{
   
   return 3.14 * radius_circle * radius_circle;
    
}
