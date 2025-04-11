//5つの整数を格納する配列を宣言し、その配列の全ての要素の合計を計算して表示するプログラムを作成してください。
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // 好きな数値で初期化してOK
    int sum;
    sum=numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4];// 合計を計算するコードをここに書いてください
    printf("%d",sum);

    return 0;
}
