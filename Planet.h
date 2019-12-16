#ifndef PLANET_H
#define PLANET_H

class Planet{
 private:
  unsigned int distance;
  unsigned long id;
  char type;
 public:
  Planet(unsigned int);
  unsigned long getID(){return this->id;}
  unsigned int getDistance(){return this->distance;}
  char getType(){return this->type;}
};
#endif
