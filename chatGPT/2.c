int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // 好きな数値で初期化してOK
    int sum=0;
    for(int i=0;i<=4;i++){
        sum += numbers[i];
        // 合計を計算するコードをここに書いてください
        
    }
    printf("%d",sum);

    return 0;
}
