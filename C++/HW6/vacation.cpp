#include <iostream>
#include <fstream>
#include "functions.h"
#include "provided.h"


int main() {
    char txtfilename[MAX_TITLE_SIZE];

    int ngames = 0;
    int duration = 0;
    std::cout << "Please enter ngames and duration: ";
    std::cin >> ngames >> duration;
    if ((ngames > 200) || (ngames <= 0) || (duration <= 0) || (duration > 365)) {
        std::cout << "Invalid input.";
        return 0;
    }

    char titles[MAX_NB_GAMES][MAX_TITLE_SIZE];
    std::cout << "Please enter name of file with titles: ";
    std::cin >> txtfilename;
    int titleval = readGameTitles(txtfilename, ngames, titles);

    int gameprefs[MAX_NB_GAMES];
    std::cout << "Please enter name of file with preferences: ";
    std::cin >> txtfilename;
    int prefvalue = readPrefs(txtfilename, ngames, gameprefs);

//  else {
//        std::cout << readPrefs(txtfilename, ngames, gameprefs) << std::endl;
//        for (int i = 0; i < MAX_NB_GAMES; ++i) {
//            std::cout << i << " " << gameprefs[i] << std::endl;
//        }
//    }

    int plan[366];
    std::cout << "Please enter name of file with plan: ";
    std::cin >> txtfilename;
    int planvalue = readPlan(txtfilename, ngames, plan);

    if ((planvalue == -1) || (titleval == -1) || (prefvalue == -1)) {
        std::cout << "Invalid file.";
        return 0;
    }
//    else {
//        for(int i = 0; i < 366; ++i) {
//            readPlan(txtfilename, ngames, plan);
//            std:: cout << i << " " << plan[i] << std::endl;
//        }
//    }

    int startdate = findBestVacation(duration, gameprefs, ngames, plan);
    std::cout << "Best start day is " << startdate << std::endl
    << "Games to be played:" << std::endl;
    printGamesPlayedInVacation(startdate, duration, plan, titles, ngames);



    return 0;
}