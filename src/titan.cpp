#include <iostream>

#include "saturn.h"

#define MY_NAME "Titan"
#define FRIEND "Kilrah"

std::string _titan_private(std::string input) {
    std::string ret = "Titan found out that " + input + " is ";
    if (!is_saturn_moon(input)) {
        ret += "NOT ";
    }
    ret += "a moon of Saturn.";
    return ret;
}

/* Check if itself is a moon of saturn and returns its name */
std::string titan_name() {
    return _titan_private(MY_NAME);
}


/* Does the same thing but for it's imaginary friend */
std::string titan_new_friend() {
    return _titan_private(FRIEND);
}
