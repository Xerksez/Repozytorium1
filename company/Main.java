package com.company;

public class Main {

    public static void main(String[] args) {
//        Rectangle prostokat=new Rectangle(2,3);
//        Square kwadrat=new Square(5);
//        Circle kolo = new Circle(5);
//        Triangle trojkat= new Triangle(1,2,5,2);
//
//        Shape[] figury=new Shape[4];
//        figury[0]=prostokat;
//        figury[1]=kwadrat;
//        figury[2]=kolo;
//        figury[3]=trojkat;
//        for(int i=0;i<4;i++) {
//            System.out.println(figury[i].getArea());
//            System.out.println(figury[i].getParimeter());
//        }

        XboxGame tombrider= new XboxGame("xbox","tombrider");
        PlaystationGame wyscigi= new PlaystationGame("playstation","wyscigi");
        Xbox xbox=new Xbox();
        Playstation playstation=new Playstation();
        playstation.playGame(wyscigi);
        playstation.playGame(tombrider);


    }
}
