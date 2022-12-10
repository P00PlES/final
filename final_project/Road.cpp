#include "Road.h"

Road::Road () {
    this->isSafeFront = true;
    this->isSafeBehind = true;
}

Road::Road (bool arg_Front, bool arg_Behind) {
    arg_Front = this->isSafeFront;
    arg_Behind = this->isSafeBehind;
}

bool Road::getSafeFront() {
    return this->isSafeFront;
}
bool Road::getSafeBehind() {
    return this->isSafeBehind;
}