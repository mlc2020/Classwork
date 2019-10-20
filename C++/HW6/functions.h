//
// Created by Mihiros on 10/4/2019.
//
#ifndef HW6_FUNCTIONS_H
#define HW6_FUNCTIONS_H

int readPrefs(char fileName[], int ngames, int prefs[]);

int readPlan(char fileName[], int ngames, int plan[]);

int computeFunLevel(int start, int duration, const int prefs[], int ngames, const int plan[]);

int findBestVacation(int duration, int prefs[], int ngames, int plan[]);


#endif //HW6_FUNCTIONS_H
