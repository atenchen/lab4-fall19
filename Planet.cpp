#include "Planet.h"
#include <iostream>
#include <cstdlib>

Planet::Planet(unsigned int distance){
  char types[3] = {'h','r','g'};
  this->id = (unsigned long)this;
  this->type = types[rand()%3];
  this->distance = distance%3001;
}
