#include <stdio.h>

int main() {
    int numbers[10] = {3, 7, 12, 5, 9, 15, 8, 20, 2, 10}; 
    int a = numbers[0];
    for(int i=0;i<10;i++){
        if(a < numbers[i]){
            a = numbers[i];
        }
    }
    printf("%d",a); // �D���Ȑ��l�ŏ���������OK
    // �ő�l��������R�[�h�������ɏ����Ă�������

    return 0;
}