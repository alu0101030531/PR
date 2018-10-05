#include <iostream>

class ladrillo{

private:

  int size;

public:

  ladrillo(int size_);

//  ~ladrillo();

  inline int GetSize()const {return size;};

};

  std::ostream& operator <<(std::ostream &os,const ladrillo& lSee);
