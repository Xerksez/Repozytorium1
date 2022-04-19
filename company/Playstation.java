package com.company;

public class Playstation extends GameConsole{


    @Override
    public void playGame(Game game) {
        if( game.type.equals("playstation"))
        {
            System.out.println("Gra działa");
        }
        else
        {
            System.out.println(game.name+" nie działa, to nie gra na playstation");
        }
    }
}
