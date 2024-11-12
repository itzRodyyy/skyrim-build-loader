// skyrim build loader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Build.h"
using namespace std;

vector<string> categories = { "Warrior", "Mage", "Rogue" };
vector<string> warrior = { "Sword and Board", "Spellblade", "Dual-Wield", "Two-Handed", "Brawler" };
vector<string> weapon_type = { "Sword", "Axe", "Mace"};
vector<string> mage = { "Destruction", "Restoration", "Illusion", "Alteration", "Conjuration" };
vector<string> rogue = { "Thief", "Assassin", "Hybrid" };


int RandomNumber(int min, int max) {
    return min + rand() % (1 + max - min);
}

Warrior GenerateWarrior() {
    string _war = warrior[RandomNumber(1, 5) - 1];
    if (_war == "Brawler") {
        return Warrior(_war);
    }
    else if (_war == "Spellblade") {
        string weapon = weapon_type[RandomNumber(1, 3) - 1];
        string spell = mage[RandomNumber(1, 5) - 1];
        return Warrior(_war, weapon, spell);
    }
    else {
        string weapon = weapon_type[RandomNumber(1, 3) - 1];
        return Warrior(_war, weapon);
    }
}
Mage GenerateMage() {
    string _mag = mage[RandomNumber(1, 5) - 1];
    return Mage(_mag);
}
Rogue GenerateRogue() {
    string _rog = rogue[RandomNumber(1, 3) - 1];
    return Rogue(_rog);
}

int main()
{
    srand(time(NULL));
    string build = categories[RandomNumber(1, 3) - 1];
    if (build == "Warrior") {
        GenerateWarrior().Print();
    }
    else if (build == "Mage") {
        GenerateMage().Print();
    }
    else {
        GenerateRogue().Print();
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
