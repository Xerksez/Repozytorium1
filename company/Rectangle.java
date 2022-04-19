package com.company;

public class Rectangle extends Shape{
protected int a;
protected int b;

    public Rectangle(int a, int b) {
        this.a = a;
        this.b = b;
    }

    @Override
    public double getArea() {
        return a*b;
    }

    @Override
    public double getParimeter() {
return 2*a+2*b;
    }
}
