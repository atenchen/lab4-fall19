#ifndef PROBE_H
#define PROBE_H
#include "Probe.h"
#include "Planet.h"
#include "Star.h"
#include <vector>
#include <queue>
class Probe{
 private:
  std::queue<Planet> planets;
 public:
  std::vector<Planet> getHabitable(Star);
  void addToQueue(Planet);
  Planet getNext();
  std::queue<Planet>& getQueue();
  void shuffle();
};

#endif
