#include "Probe.h"
#include <iostream>
#include <cstdlib>

std::vector<Planet> Probe::getHabitable(Star s){
  std::vector<Planet> star = s.getPlanets();
  std::vector<Planet> habitables;
  for(unsigned int i = 0;i < star.size(); i++){
    char type = star.at(i).getType();
    unsigned long distance = star.at(i).getDistance();
    if(type == 'h' && distance >= 60 && distance <= 140){
      habitables.push_back(star.at(i));
    }
  }
  return habitables;
}

void Probe::addToQueue(Planet p){
  planets.push(p);
}

Planet Probe::getNext(){
  Planet next = planets.front();
  planets.pop();
  return next;
}

std::queue<Planet>& Probe::getQueue(){
  return planets;
}

void Probe::shuffle(){
  /*int size = planets.size();
  Planet planetArray[size];
  while(planets.size() > 0){
    for(int i = 0; i < size; i++){
      if(rand()%2 == 1 && planetArray == NULL){
	planetArray[i] = planets.front();
	planets.pop();
      }
    }
  }
  for(int i = 0; i < size; i++){
    planets.push(planetArray[i]);
  }*/
  int size = planets.size();
  int repet = 0;
  while(repet < 20){
    for(int i = 0;i < size; i++){
      if(rand()%2 == 0){
	Planet f = planets.front();
	planets.pop();
	planets.push(f);
      }
    }
    repet++;
  }
}
