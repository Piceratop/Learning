def Initialize(board):
    # Initialize game
    # Initialize grid
    for i in range(9):
        board[i] = "."
    global player
    player = "X"


game_board = [".", ".", ".", ".", ".", ".", ".", ".", "."]
player = "X"


def Print_Board(board):
    print("\n")
    print("-------------")
    for i in range(9):
        print("| ", end="")
        if board[i] == ".":
            print(str(i + 1) + " ", end="")
        else:
            print(board[i] + " ", end="")
        if (i + 1) % 3 == 0:
            print("|")
            print("-------------")


def Get_Move(player, board):
    while True:
        move = input("Player " + player + ", enter your move: ")
        if move not in ["1", "2", "3", "4", "5", "6", "7", "8", "9"]:
            print("Invalid move. Please enter a number between 1 and 9.")
            continue
        move = int(move) - 1
        if board[move] != ".":
            print("Invalid move. That space is already taken.")
            continue
        return move


def Make_Move(board, move):
    global player
    board[move] = player
    if player == "X":
        player = "O"
    else:
        player = "X"


def Check_For_Winner(board):
    for i in range(3):
        if board[i] == board[i + 3] == board[i + 6] and board[i] != ".":
            return board[i]
    for i in range(0, 9, 3):
        if board[i] == board[i + 1] == board[i + 2] and board[i] != ".":
            return board[i]
    if board[0] == board[4] == board[8] and board[0] != ".":
        return board[0]
    if board[2] == board[4] == board[6] and board[2] != ".":
        return board[2]
    blanks = 0
    for i in range(9):
        if board[i] == ".":
            blanks += 1
    if blanks == 0:
        return "T"
    return False


Initialize(game_board)

while True:
    Print_Board(game_board)
    current_move = Get_Move(player, game_board)
    Make_Move(game_board, current_move)
    if Check_For_Winner(game_board):
        Print_Board(game_board)
        if Check_For_Winner(game_board) == "X":
            print("Player X wins!")
        elif Check_For_Winner(game_board) == "O":
            print("Player O wins!")
        elif Check_For_Winner(game_board) == "T":
            print("Tie game!")
        break
