package com.company;

public class Triangle extends Shape{
    int max;
    protected int a;
    protected int b;
    protected int c;
    protected int h;

    public Triangle(int a, int b, int c, int h) {
        if(a>b&&a>c&&a>b+c||b>a&&b>c&&b>a+c||c>a&&c>b&&c>b+a)
        {
            System.out.println("Nie da się zrobić trójkąta");
            h=0;
        }
        this.a = a;
        this.b = b;
        this.c = c;
        this.h = h;
    }

    @Override
    public double getArea() {
        return a*h/2;
    }

    @Override
    public double getParimeter() {
        return a+b+c;
    }
    }

