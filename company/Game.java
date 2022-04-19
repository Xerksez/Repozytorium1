package com.company;

public abstract class Game {
    protected String type;
    protected String name;

    public Game(String type, String name) {
        this.type = type;
        this.name = name;
    }
}
