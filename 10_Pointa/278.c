#include <stdio.h>
int main(void) {
    int n;
    double x;
    int a[4];
    printf("n�̃A�h���X:%p\n", &n);
    printf("x�ȉ���:%p\n", &x);
    printf("a[0]�̃A�h���X:%p\n", &a[0]);
    printf("a[1]�̃A�h���X:%p\n", &a[1]);
    printf("a[3]�̃A�h���X:%p\n", &a[3]);
    printf("a[4]�̃A�h���X:%p\n", &a[4]);
}