#ifndef STAR_H
#define STAR_H
#include "Planet.h"
#include <vector>
class Star{
 private:
  unsigned long id;
  std::vector<Planet> planets;
 public:
  unsigned long addPlanet();
  bool removePlanet(unsigned long);
  Planet * getPlanet(unsigned long);
  std::vector<Planet>& getPlanets(){return planets;}
};
#endif
