package com.company;

public class Circle extends Shape{
    protected int r;

    public Circle(int r) {
        this.r = r;
    }

    @Override
    public double getArea() {
        return Math.PI*r*r;
    }

    @Override
    public double getParimeter() {
        return 2*Math.PI*r;
    }
}
