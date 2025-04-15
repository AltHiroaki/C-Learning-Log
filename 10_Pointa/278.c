#include <stdio.h>
int main(void) {
    int n;
    double x;
    int a[4];
    printf("nのアドレス:%p\n", &n);
    printf("x以下略:%p\n", &x);
    printf("a[0]のアドレス:%p\n", &a[0]);
    printf("a[1]のアドレス:%p\n", &a[1]);
    printf("a[3]のアドレス:%p\n", &a[3]);
    printf("a[4]のアドレス:%p\n", &a[4]);
}