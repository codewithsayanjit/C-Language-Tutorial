// Use library functions to calculate the square of a number give by user.
/*#include<stdio.h>
#include<math.h>
int main(){
    int num = 4;
    printf("%.2f",pow(num,2)); // pow(num,2) means number * number
    return 0;
}*/


// Write functions to calculate area of a square,a circle & a rectangle.
#include<stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectengularArea(float a, float b);
int main(){
    float a = 5.0;
    float b = 10.0;
    printf("Area is : %.2f", rectengularArea(a,b));
    return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float radius){
    return 3.14*radius*radius;
}
float rectengularArea(float a, float b){
    return a*b;
}