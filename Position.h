//
// Created by The Duke on 08/12/2022.
//

#ifndef BOTS_POSITION_H
#define BOTS_POSITION_H


class Position {
private:
    int rows, cols, homer, homec;
    int rindex; // current row index
    int cindex; // current column index

public:
    const void display(); // prints the grid to the screen
    void move(int); // moves the bot in the indicated direction
    void rehome(); // sets the position to current position - only called when move(5) is called
    void reset(); // bot is transported to its home position
    Position& operator = (const Position &p);

    Position(int homerow, int homecol, int rows, int cols);
    Position(int homerow, int homecol);
    Position();

};


#endif //BOTS_POSITION_H
