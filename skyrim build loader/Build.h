#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Warrior {
	// Fields
	string mArch = "";
	string mWeapon = "";
	string mSpell = "";
	// Constructors
	Warrior(string _arch) {
		mArch = _arch;
	}
	Warrior(string _arch, string _weapon) { // Constructor for all but Spellblade and Brawler
		mArch = _arch;
		mWeapon = _weapon;
	}
	Warrior(string _arch, string _weapon, string _spell) { // Constructor for Spellblade
		mArch = _arch;
		mWeapon = _weapon;
		mSpell = _spell;
	}
	// Methods
	// -> Getters
	string GetArchetype() {
		return mArch;
	}
	string GetWeaponType() {
		return mWeapon;
	}
	string GetSpellType() {
		return mSpell;
	}
	// -> Setters
	void SetArchetype(string _arch) {
		mArch = _arch;
	}
	void SetWeaponType(string _weapon) {
		mWeapon = _weapon;
	}
	void SetSpellType(string _spell) {
		mSpell = _spell;
	}
	// Other Methods
	void Print() {
		cout << "Warrior\n";
		cout << "  Archetype: " << mArch << endl;
		if (mWeapon != "") cout << "  Weapon: " << mWeapon << endl;
		if (mSpell != "") cout << "  Spell School: " << mSpell << endl;
	}
};
struct Mage {
	// Fields
	string mSpell = "";
	// Constructor
	Mage(string _spell) {
		mSpell = _spell;
	}
	// Methods
	// -> Getters
	string GetSpellSchool() {
		return mSpell;
	}
	// -> Setters
	void SetSpellSchool(string _spell) {
		mSpell = _spell;
	}
	// -> Other Methods
	void Print() {
		cout << "Mage\n";
		cout << "  Spell School: " << mSpell << endl;
	}
};
struct Rogue {
	// Fields
	string mArch;
	// Constructor
	Rogue(string _arch) {
		mArch = _arch;
	}
	// Methods
	// -> Getters
	string GetArchetype() {
		return mArch;
	}
	// -> Setters
	void SetArchetype(string _arch) {
		mArch = _arch;
	}
	// -> Other Methods
	void Print() {
		cout << "Rogue\n";
		cout << "  Archetype: " << mArch << endl;
	}
};