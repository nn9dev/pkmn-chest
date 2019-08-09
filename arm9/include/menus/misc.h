#ifndef MENU_MISC
#define MENU_MISC

#include <Sav.hpp>

// Returns the language in the correct order for a Pokémon
int pkmLang(void);

// Shows the form selection menu
int selectForm(int dexNo, int currentForm);

// Shows the move editing menu
std::shared_ptr<PKX> selectMoves(std::shared_ptr<PKX> pkm);

// Shows the nature selection menu
int selectNature(int currentNature);

// Shows the Pokéball selection menu
int selectPokeball(int currentBall);

// Shows the box selection menu
int selectBox(int currentBox);

// Shows the stat editing menu
std::shared_ptr<PKX> selectStats(std::shared_ptr<PKX> pkm);

#endif
