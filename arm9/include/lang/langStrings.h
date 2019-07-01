#ifndef LANG_STRINGS_H
#define LANG_STRINGS_H

#include <string>
#include <vector>

namespace Lang {
	extern std::vector<std::string>
	// In game text strings
	balls, items, locations4, locations5, moves, natures, species,
	// App strings
	aMenuText,
	aMenuEmptySlotText,
	aMenuTopBarText,
	optionsTextLabels,
	optionsText,
	summaryP1Labels,
	summaryP2Labels,
	xMenuText;

	extern std::string
	// [main]
	chest,
	invalidSave,
	loading;
}

#endif
