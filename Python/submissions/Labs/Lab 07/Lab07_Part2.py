# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Kaushal Gajula
# 	        	Aidan Cormier
# 	        	Justin Arackel
#             	Christopher Tran
#		        Mihir Chadaga
# Section:    	504
# Assignment: 	LAB 7
# Date:       	10/9/2018
players = []
tot_score = []

print("For each golfer in a tournament, give me their first round score, their second round score, and their name. Entering a negative number for their first round score will end the entering process")

while 1 == 1:
    score_1 = int(input("Give me their first round score"))
    if score_1 < 0:
        break
    score_2 = int(input("Give me their second round score"))
    player = (input("Golfer's name: "))
    players.append(player)
    tot_score.append(score_1+score_2)

stor = {}
i = 0
for item in tot_score:
    stor.update({item : players[i]})
    i += 1

for x in range(len(tot_score)-1):
    if tot_score[x] > tot_score[x+1]:
        i = x +1
        while i > 0:
            if tot_score[i] < tot_score[i-1]:
                temp = tot_score[i]
                tot_score[i] = tot_score[i-1]
                tot_score[i-1] = temp
            i -= 1

median = int(len(tot_score)/2)
i = 0
failed = 0
print("Players who made the cut:")
for score in tot_score:
    i += 1
    if i <= median:
        print(stor[score],score)
    elif failed == 0:
        print("Players who did not make the cut:")
        print(stor[score], score)
        failed = 1
    else:
        print(stor[score], score)
