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
        printf("�~�̔��a����͂��Ă��������B:");scanf("%lf",&r);
        printf("�~�̖ʐς�%.5lf�ŁA���͂̒�����%.5lf�ł��I",circle_area(r),circle_circumference(r));
    }
