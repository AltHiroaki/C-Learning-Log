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
        printf("‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");scanf("%lf",&r);
        printf("‰~‚Ì–ÊÏ‚Í%.5lf‚ÅAüˆÍ‚Ì’·‚³‚Í%.5lf‚Å‚·I",circle_area(r),circle_circumference(r));
    }
