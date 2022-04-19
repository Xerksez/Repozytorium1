package com.company;

public class Xbox extends GameConsole{

    @Override
    public void playGame(Game game) {
        if( game.type.equals("xbox"))
        {
            System.out.println("Gra działa");
        }
        else
        {
            System.out.println(game.name+" nie działa, to nie gra na xboxa");
        }
    }
}
