#ifndef SCHEMA_H
#define SCHEMA_H

enum HP {
	SOLDIER = 100,
	ROGUE = 85,
	BERSERKER = 120,
	VAMPIRE = 110,
	WEREWOLF = 115,
	WIZARD = 80,
	HEALER = 50,
	PRIEST = 60,
	WARLOCK = 105,
	NECROMANCER = 90
};

enum DMG {
	SOLDIER_DMG = 20,
	ROGUE_DMG = 25,
	BERSERKER_DMG = 35,
	VAMPIRE_DMG = 30,
	WEREWOLF_DMG = 25,
	WIZARD_DMG = 15,
	HEALER_DMG = 10,
	PRIEST_DMG = 10,
	WARLOCK_DMG = 25,
	NECROMANCER_DMG = 25
};

enum SPELL_LIST {
	FIREBALL_,
	HEAL_,
	DEMON_
};

enum BOOK {
	FIREBALL_NAME= 20,
	HEAL_NAME = 10
};

enum SPELL {
	FIREBALL_DMG = 50,
	HEAL_DMG = 30
};

enum MANA {
	WIZARD_MANA = 150,
	HEALER_MANA = 200,
	PRIEST_MANA = 160,
	WARLOCK_MANA = 150,
	NECROMANCER_MANA = 190
};

#endif // SCHEMA_H

