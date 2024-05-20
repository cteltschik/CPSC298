//
//  final.h
//  FINAL_01
//
//  Created by Charley Teltschik on 5/13/24.
//

#ifndef inheritance_h
#define inheritance_h
#include <string>

class Shape{
    
    public:
    Shape(double height, double width);
    virtual ~Shape();
    virtual void scale(double scaleFactor) = 0;
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void displayProperties();
    
    protected:
    double m_height;
    double m_width;
    std::string m_str;
    
};

class Rectangle : public Shape{
    
    public:
    Rectangle(double height, double width);
    virtual ~Rectangle();
    void scale(double scaleFactor) override;
    virtual double area() override;
    virtual double perimeter() override;
    
};

class Circle : public Shape{
    
    public:
    Circle(double height, double width); // width = height = diameter
    virtual ~Circle();
    void scale(double scaleFactor) override;
    virtual double area() override;
    virtual double perimeter() override;
    
};

#endif /* inheritance_h */
