#include <string>
#include <vector>
#include <algorithm>

#include "saturn.h"

#define SATURN_MOONS { "titan", "europa", "ganymede", "callisto" }

/* Is the given string a moon of Saturn? */
bool is_saturn_moon(std::string input) {
    static const std::vector<std::string> moons = SATURN_MOONS;
    return std::find(moons.begin(), moons.end(), input) != moons.end();
}

