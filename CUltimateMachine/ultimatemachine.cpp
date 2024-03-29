#include <iostream>
#include <string>
using namespace std;

class CUltimateMachine {
  // CONSTRUCTOR
public:
  CUltimateMachine() : m_bState(false) {
    cout << "CUltimateMachine constructor (ctor) called" << endl;
  }

  // DESTRUCTOR
  ~CUltimateMachine() {
    cout << "CUltimateMachine deconstructor (dtor) called" << endl;
  }

  void displayState() {
    if (m_bState == true) {
      cout << "CUltimateMachine is ON" << endl;
    } else if (m_bState == false) {
      cout << "CUltimateMachine is OFF" << endl;
    }
  }

void turnOn(){
  m_bState = true;
  displayState();
  if (true == m_bState){
    m_bState = false;
  }
  displayState();
}

private:
  bool m_bState; // true (ON), false (OFF)
};

int main(){
cout << "The Ultimate Machine Simulation" << endl;
  CUltimateMachine ultmach;
  ultmach.displayState();
  ultmach.turnOn();
};