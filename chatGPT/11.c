#include <stdio.h>
    double circle_area(double radius){
        double x;
        x=3.14159*radius*radius;
        return x;
    }
    double circle_circumference(double radius){
        double y;
        y=2*3.14159*radius;
        return y;
    }
    int main(){
        double r;
        printf("円の半径を入力してください。:");scanf("%lf",&r);
        printf("円の面積は%.5lfで、周囲の長さは%.5lfです！",circle_area(r),circle_circumference(r));
    }
