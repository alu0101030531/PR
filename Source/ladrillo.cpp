#include "../Headers/ladrillo.hpp"


ladrillo::ladrillo(int size_): size(size_){}

std::ostream& operator <<(std::ostream &os,const ladrillo& lSee){

  for(int i=0; i<lSee.GetSize();i++){
    os << "x";
  }

  return os;

}
