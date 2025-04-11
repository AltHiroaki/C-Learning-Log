#include <stdio.h>

#define SIZE 3

// �O���[�o���ϐ�
char board[SIZE][SIZE]; // �Q�[���{�[�h

// �v���g�^�C�v�錾
void initializeBoard();
void displayBoard();
int checkWin();
int isBoardFull();
void playerMove(int player);

// ���C���֐�
int main() {
    int player = 1;  // �v���C���[1����X�^�[�g
    int winner = 0;  // 0�̓Q�[�������s���A1�̓v���C���[1�̏����A2�̓v���C���[2�̏���

    initializeBoard(); // �{�[�h��������

    while (!winner && !isBoardFull()) {
        displayBoard();  // �{�[�h��\��
        playerMove(player);  // �v���C���[�̓���

        winner = checkWin();  // ���҂��m�F

        // ���҂����܂�Ȃ���΃v���C���[���
        if (!winner) {
            player = (player == 1) ? 2 : 1;
        }
    }

    displayBoard(); // �ŏI�I�ȃ{�[�h��\��

    if (winner) {
        printf("�v���C���[ %d �̏����ł�!\n", winner);
    } else {
        printf("���������ł�!\n");
    }

    return 0;
}

// �{�[�h��������
void initializeBoard() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = ' ';  // ��̏��
        }
    }
}

// �{�[�h��\��
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

// �v���C���[�̓���
void playerMove(int player) {
    int row, col;
    char symbol = (player == 1) ? 'X' : 'O';

    do {
        printf("�v���C���[ %d (%c) �̔Ԃł��B�s(1-3)�Ɨ�(1-3)����͂��Ă�������: ", player, symbol);
        scanf("%d %d", &row, &col);
        row--;  // �C���f�b�N�X�ɍ��킹��
        col--;
    } while (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ');

    board[row][col] = symbol;
}

// ���������̊m�F
int checkWin() {
    // �s�̊m�F
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return (board[i][0] == 'X') ? 1 : 2;
        }
    }

    // ��̊m�F
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return (board[0][i] == 'X') ? 1 : 2;
        }
    }

    // �Ίp���̊m�F
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return (board[0][0] == 'X') ? 1 : 2;
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return (board[0][2] == 'X') ? 1 : 2;
    }

    return 0; // ���҂Ȃ�
}

// �{�[�h�����t���ǂ����m�F
int isBoardFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1; // ���t
}