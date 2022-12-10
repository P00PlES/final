#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/value.h>
#include <string.h>
#include <stdbool.h>

class Road {
 private:
 protected:
 public:
  
  bool isSafeFront;
  bool isSafeBehind;

  Road();
  Road(bool, bool);
  bool getSafeFront();
  bool getSafeBehind();

};

#endif