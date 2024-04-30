// CPSC 298-6 "Programming in C++"
// teltschik@champman.edu
// Programming Project: Polygons - Midterm
// File: MidtermProgrammingProject_CentralPolygonalNumbers-1.cpp
//

#include <iostream>
#include <string>
#include <fstream>

class CentralPolygonalNumbers{
public:
    CentralPolygonalNumbers();
    CentralPolygonalNumbers(int nMax);
    ~CentralPolygonalNumbers();
    void display();
    bool save(std::string strFilename);
    
private:
    int m_nMax; // stores largest value of n to be used
    int* mp_iNumbers; //used to hold specified number of the first entries in the sequence
};

CentralPolygonalNumbers::CentralPolygonalNumbers(){
    this->m_nMax = 0;
    mp_iNumbers = new int[m_nMax + 1];
    
    for (int n = 0; n <= m_nMax; n++){
        int p = ((n * n) + n + 2)/2;
        mp_iNumbers[n] = p;
    };
};

CentralPolygonalNumbers::CentralPolygonalNumbers(int maximum){
    m_nMax = maximum;
    mp_iNumbers = new int[m_nMax + 1];
    
    for (int n = 0; n <= m_nMax; n++){
        int p = ((n * n) + n + 2)/2;
        mp_iNumbers[n] = p;
    };
};

CentralPolygonalNumbers::~CentralPolygonalNumbers(){
    delete[] mp_iNumbers;
    std::cout << "~CentralPolygonalNumbers called." << std::endl;
};

void CentralPolygonalNumbers::display(){
    for (int n = 0; n <= m_nMax; n++){
        std::cout << "n: " << n << "; maximum number of pieces: " << mp_iNumbers[n] << std::endl;
    };
};

bool CentralPolygonalNumbers::save(std::string Numbers){
    std::ofstream ofs(Numbers);
    if (ofs.is_open()) {
        for (int n = 0; n <= m_nMax; n++) {
                ofs << mp_iNumbers[n] << std::endl;
            }
            ofs.close();
        return true;}
    
    else {
        std::cerr << "Unable to open file " << Numbers << std::endl;
        return false;
        }
};



int main() {
    CentralPolygonalNumbers cpn(10);
    cpn.display();
    cpn.save("CPN");
    return 0;
};
