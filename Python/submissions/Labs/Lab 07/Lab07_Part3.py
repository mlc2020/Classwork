# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
#               Mihir Chadaga
# Section:    	504
# Assignment: 	LAB 07 Activity 3
# Date:       	08 10 2018
import sys
print('Chess: The Game')
print('    a b c d e f g h')
print('   ________________')
x = 8
board = ['.']*x
for i in range(x):
    board[i] = ['.'] * x

for p in range(x):
    board[1][p] = 'p'
    board[6][p] = 'P'
board[0][0], board[0][7], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6] = 'r', 'r', 'n', 'b', 'q', 'k', 'b', 'n'
board[7][0], board[7][7], board[7][1], board[7][2], board[7][3], board[7][4], board[7][5], board[7][6] = 'R', 'R', 'N', 'B', 'Q', 'K', 'B', 'N'
for j in range(x):
    print(j, end=' | ')
    print(*board[j])


def posiswap(initial_position, final_position):
    if board[int(initial_position[1])][int(initial_position[0])] == '.':
        print('Error: no piece on coordinate, terminating process')
        sys.exit()
    elif board[int(final_position[1])][int(final_position[0])] == '.':
        temp = board[int(final_position[1])][int(final_position[0])]
        board[int(final_position[1])][int(final_position[0])] = board[int(initial_position[1])][int(initial_position[0])]
        board[int(initial_position[1])][int(initial_position[0])] = temp
    else:
        board[int(final_position[1])][int(final_position[0])] = board[int(initial_position[1])][int(initial_position[0])]
        board[int(initial_position[1])][int(initial_position[0])] = '.'


def letnum(pos):
    if pos == 'a':
        return 0
    elif pos == 'b':
        return 1
    elif pos == 'c':
        return 2
    elif pos == 'd':
        return 3
    elif pos == 'e':
        return 4
    elif pos == 'f':
        return 5
    elif pos == 'g':
        return 6
    elif pos == 'h':
        return 7


while True:
    pos_ini = input('Enter the coordinate of the piece you wish to move i.e. (a1, h1) : ')
    pos_fin = input('Enter the coordinate of the place you wish to move i.e. (a3, h3) : ')
    ding = str(letnum(pos_ini[0]))
    dong = str(letnum(pos_fin[0]))
    init = list(pos_ini)
    fin = list(pos_fin)
    init[0] = ding
    fin[0] = dong
    init = ''.join(init)
    fin = ''.join(fin)
    posiswap(init, fin)
    print('\n'*80)
    print('Chess: The Game')
    print('    a b c d e f g h')
    print('   ________________')
    for j in range(x):
        print(j, end=' | ')
        print(*board[j])


