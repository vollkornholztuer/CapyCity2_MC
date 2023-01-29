// CapyCity_MC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "CapycitySim.h"
#include "Building.h"
#include "CapyCity2_MC.h"
using namespace std;
bool running = true;

int main(int argc, char** argv)
{
    CapycitySim s1;
    int buildAreaWidth;
    int buildAreaLength;

    if (argc != 3) {
        cout << "Verwendung: \n";
        cout << "CapyCity_MC <width> <height>\n";
        return 1;
    }

    try {
        buildAreaWidth = stoi(argv[1]);
        buildAreaLength = stoi(argv[2]);
    }
    catch (invalid_argument const& ex) {
        ex;
        cout << "Eingabe besteht aus zwei ganzen Zahlen";
        return 2;
    }
    catch (out_of_range const& ex) {
        ex;
        cout << "Die Eingabe besteht NUR aus zwei ganzen Zahlen.";
        return 3;
    }

    s1.declareBuildingArea(buildAreaWidth, buildAreaLength);

    /*buildArea = new Building * [s1.width];
    for (int x = 0; x < s1.width; x++) {
        buildArea[x] = new Building[s1.length];
        for (int y = 0; y < s1.length; y++) {
            buildArea[x][y] = EmptySpace::EmptySpace();
        }
    }*/

    
    while (running) {
        s1.menu();
    }

    /*for (int x = 0; x < s1.width; x++) {
        delete[] buildArea[x];
    }
    delete[] buildArea;*/
}