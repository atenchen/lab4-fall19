#include "Star.h"
#include <iostream>
#include <cstdlib>

unsigned long Star::addPlanet(){
  Planet newPlanet(rand());
  planets.push_back(newPlanet);
  return newPlanet.getID();
}

bool Star::removePlanet(unsigned long id){
  for (auto it = planets.begin(); it != planets.end(); it++) {
    if ((*it).getID() == id) {
	planets.erase(it);
	return true;
	}
  }/*
  for(unsigned int i = 0; i<planets.size();i++){
    if(planets.at(i).getID() == id){
      planets.erase(planets.begin()+i);
      return true;
    }
  }*/
  return false;
}

Planet * Star::getPlanet(unsigned long id){
  for(unsigned int i = 0; i < planets.size();i++){
    if(planets.at(i).getID() == id){
      return &planets.at(i);
    }
  }
  return nullptr;
}
