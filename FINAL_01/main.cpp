//
//  main.cpp
//  FINAL_01
//
//  Created by Charley Teltschik on 5/13/24.
//

#include <iostream>
#include "inheritance.h"
#include <string>

int main(int argc, const char * argv[]) {
    
    Rectangle* p_rec = new Rectangle(2.0, 3.0);
    Circle* p_circ = new Circle(2.0, 2.0);
    
    Shape* p_shapes[2];
    p_shapes[0] = p_circ;
    p_shapes[1] = p_rec;
    
    for (int i = 0; i < 2; i++){
        p_shapes[i]->displayProperties();
        std::cout << "Area: " << p_shapes[i]->area();
        std::cout << ", Perimeter: " << p_shapes[i]->perimeter() << std::endl;
        p_shapes[i]->scale(2.0);
        p_shapes[i]->displayProperties();
        std::cout << "Area: " << p_shapes[i]->area() << ", ";
        std::cout << "Perimeter: " << p_shapes[i]->perimeter() << std::endl;
        std::cout << '\n';
    }
    
    for (int i = 0; i < 2; i++){
        delete p_shapes[i];
    }
    
    
    return 0;
};
