//
//  final.cpp
//  FINAL_01
//
//  Created by Charley Teltschik on 5/13/24.
//

#include <iostream>
#include "inheritance.h"
#include <string>
#include <cmath>

Shape::Shape(double height, double width) : m_height(height), m_width(width){
    m_str = "Shape";
}

Shape::~Shape(){};

void Shape::displayProperties() {
    std::cout << "Shape Type: " << m_str << ", height: " << m_height << ", width: " << m_width << std::endl;
}

Rectangle::Rectangle(double height, double width) : Shape(height, width){
    m_str = "Rectangle";
}

Rectangle::~Rectangle(){};

void Rectangle::scale(double scaleFactor){
    m_height *= scaleFactor;
    m_width *= scaleFactor;
}

double Rectangle::area(){
    return m_height * m_width;
}

double Rectangle::perimeter(){
    return 2 * (m_height + m_width);
}

Circle::Circle(double height, double width) : Shape(height, width){
    m_str = "Circle";
}

Circle::~Circle(){};

void Circle::scale(double scaleFactor){
    m_height *= scaleFactor;
    m_width *= scaleFactor;
}

double Circle::area(){
    return 0.25 * M_PI * (m_height * m_width); //height = width = diameter, diamter^2 equals height * width
}

double Circle::perimeter(){
    return M_PI * m_height;
}




