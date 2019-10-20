#include <iostream>
#include <fstream>
#include <cstring>
#include "functions.h"
#include "provided.h"

int readPrefs(char fileName[], int ngames, int prefs[]) {
    int numvalid = 0;
    std::ifstream fin;
    fin.open(fileName);

    if(!fin) {
        return -1;
    }

    for(int i = 0; i < MAX_NB_GAMES; ++i) {
        prefs[i] = 0;
    }

    int gameid = -1;
    int gamepref = -1;
    char badval[MAX_TITLE_SIZE];
    while (!fin.eof()) {
        fin >> gameid;
        if (fin.good() && gameid >= 0 && gameid < MAX_NB_GAMES) {
            fin >> gamepref;
            if (fin.good() && gamepref >= 0 && gamepref <= 5) {
                prefs[gameid] = gamepref;
                ++numvalid;
            } else {
                fin.clear();
                fin.getline(badval, MAX_TITLE_SIZE);
            }
        } else {
            fin.clear();
            fin.getline(badval, MAX_TITLE_SIZE);
        }
    }
    return numvalid;
}

int readPlan(char fileName[], int ngames, int plan[]) {
    std::ifstream fin;
    fin.open(fileName);

    if(!fin) {
        return -1;
    }

    int day = 0;
    int daygame = 0;
    while(!fin.eof()) {
        fin >> day;
        fin >> daygame;
        plan[day] = daygame;
    }
    return 0;
}

int computeFunLevel(int start, int duration, const int prefs[], int ngames, const int plan[]) {
    int funval = 0;
    int gameid = -1;
    if (start + (duration-1) > 365) {
        return -1;
    } else {
        for(int i = start; i < start + duration; ++i) {
            gameid = plan[i];
            funval += prefs[gameid];
        }
    }

    return funval;
}

int findBestVacation(int duration, int prefs[], int ngames, int plan[]) {
    int startdate = 0;
    int maxfunval = -100000;
    int iFunVal = 0;
    for(int i = 1; i <= 365; ++i) {
        iFunVal = computeFunLevel(i, duration, prefs, ngames, plan);
        if (iFunVal > maxfunval) {
            startdate = i;
            maxfunval = iFunVal;
//            std::cout << maxfunval << std::endl;
        }
    }
    return startdate;
}