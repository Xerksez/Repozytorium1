package com.company;

public class Square extends Shape {
    protected int a;

    public Square(int a) {
        this.a = a;
    }

    @Override
    public double getArea() {
        return a*a;
    }

    @Override
    public double getParimeter() {
        return 4*a;
    }
}
