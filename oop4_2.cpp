#include <iostream>
#include <string>
using std::string, std::cout, std::endl;

int main()
{
  Car* mashinka [2];
  mashinka[0] = new Car(111111);
  mashinka[1] = new Car(222222);
  Car ford(*mashinka[1]);
  mashinka[1]->setVIN(33);
  mashinka[0]->printInfo(); //111111
  mashinka[1]->printInfo(); //33
  ford.printInfo(); //222222
  delete mashinka[0];
  delete mashinka[1];
  ford.printInfo(); //222222
  return 0;
}
