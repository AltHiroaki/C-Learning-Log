#include <stdio.h>

#define SIZE 3

// グローバル変数
char board[SIZE][SIZE]; // ゲームボード

// プロトタイプ宣言
void initializeBoard();
void displayBoard();
int checkWin();
int isBoardFull();
void playerMove(int player);

// メイン関数
int main() {
    int player = 1;  // プレイヤー1からスタート
    int winner = 0;  // 0はゲームが続行中、1はプレイヤー1の勝ち、2はプレイヤー2の勝ち

    initializeBoard(); // ボードを初期化

    while (!winner && !isBoardFull()) {
        displayBoard();  // ボードを表示
        playerMove(player);  // プレイヤーの動き

        winner = checkWin();  // 勝者を確認

        // 勝者が決まらなければプレイヤー交代
        if (!winner) {
            player = (player == 1) ? 2 : 1;
        }
    }

    displayBoard(); // 最終的なボードを表示

    if (winner) {
        printf("プレイヤー %d の勝ちです!\n", winner);
    } else {
        printf("引き分けです!\n");
    }

    return 0;
}

// ボードを初期化
void initializeBoard() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = ' ';  // 空の状態
        }
    }
}

// ボードを表示
void displayBoard() {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// プレイヤーの動き
void playerMove(int player) {
    int row, col;
    char symbol = (player == 1) ? 'X' : 'O';

    do {
        printf("プレイヤー %d (%c) の番です。行(1-3)と列(1-3)を入力してください: ", player, symbol);
        scanf("%d %d", &row, &col);
        row--;  // インデックスに合わせる
        col--;
    } while (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ');

    board[row][col] = symbol;
}

// 勝利条件の確認
int checkWin() {
    // 行の確認
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return (board[i][0] == 'X') ? 1 : 2;
        }
    }

    // 列の確認
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return (board[0][i] == 'X') ? 1 : 2;
        }
    }

    // 対角線の確認
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return (board[0][0] == 'X') ? 1 : 2;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return (board[0][2] == 'X') ? 1 : 2;
    }

    return 0; // 勝者なし
}

// ボードが満杯かどうか確認
int isBoardFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1; // 満杯
}