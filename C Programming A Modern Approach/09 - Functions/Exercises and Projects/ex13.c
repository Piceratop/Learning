#include <stdio.h>

int evaluate_position(char board[8][8]);

int main() {
	char board[8][8] = {
		{'r', ' ', ' ', ' ', 'r', 'n', 'k', ' '},
		{'p', 'b', ' ', ' ', ' ', 'p', 'p', ' '},
		{' ', ' ', ' ', 'p', 'p', ' ', ' ', 'p'},
		{' ', 'q', ' ', ' ', ' ', ' ', 'B', 'Q'},
		{' ', 'p', ' ', 'p', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', 'N', ' ', 'R', ' '},
		{'p', ' ', ' ', ' ', ' ', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', 'R', ' ', 'K', ' '}
	};

	printf("%d", evaluate_position(board));
	return 0;
}

int evaluate_position(char board[8][8]) {
	int white = 0, black = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch (board[i][j]) {
				case 'r':
					black += 5;
					break;
				case 'n':
				case 'b':
					black += 3;
					break;
				case 'q':
					black += 9;
					break;
				case 'p':
					black += 1;
					break;
				case 'R':
					white += 5;
					break;
				case 'N':
				case 'B':
					white += 3;
					break;
				case 'Q':
					white += 9;
					break;
				case 'P':
					white += 1;
					break;
				default:
					break;
			}
		}
	}

	return white - black;
}
