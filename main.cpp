#include <iostream>
void readForceValuesfromStdIn(double *leftTeam, double *rightTeam, unsigned const int noParticipants) {
    int j{}, k{};
    for (int i{1}; i <= 2*noParticipants; ++i) {
        if (i%2 != 0) {
            std::cout << "Left team val: ";
            std::cin >> *(leftTeam + j);
            j++;
        } else {
            std::cout << "Right team val: ";
            std::cin >> *(rightTeam + k);
            k++;
        }
    }
}

bool validForces(const double *forces, unsigned const int noParticipants) {
    for (int i{}; i < noParticipants; ++i) {
        if (forces[i] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned int noParticipants{};
    std::cin >> noParticipants;
    double leftTeamVal[noParticipants];
    double rightTeamVal[noParticipants];

    readForceValuesfromStdIn(leftTeamVal, rightTeamVal, noParticipants);


};