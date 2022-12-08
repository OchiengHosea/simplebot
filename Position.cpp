//
// Created by The Duke on 08/12/2022.
//
#include <iostream>
#include "Position.h"
using std::cin;
using std::cout;
using std::endl;

Position::Position(
        int homerow, int homecol,
        int rows, int cols): homer(homerow), homec(homecol),
        rows(rows), cols(cols) {
    cindex = homecol;
    rindex = homerow;
}

Position::Position(int homerow, int homecol) : homer(homerow), homec(homecol) {
    this->rows = 10;
    this->cols = 10;
    cindex = homecol;
    rindex = homerow;
}

Position::Position() {
    this->homer = 0;
    this->homec = 0;
    this->rows = 10;
    this->cols = 10;
    cindex = this->homec;
    rindex = this->homer;
}

void Position::move(int n) {
    if (n < 0 || n > rows - 1 || n > cols - 1){
        cout << "Invalid position" << endl;
    } else {
        if (n == 5 || n== 0) {
            cout << "\n" << "That is a reserved position" << endl;
        } else {
            this->cindex = n;
            this->rindex = n;
            cout << "\n" << "Bot moved to " << n << "," << n  << endl;
        }
    }
    display();
}

void Position::rehome() {
    this->homer = this->rindex;
    this->homec = this->cindex;
    display();
}

void Position::reset() {
    this->cindex = 0;
    this->rindex = 0;
    display();
}

Position& Position::operator = (const Position &p){
    cindex = p.cindex;
    rindex = p.rindex;
    return *this;
}

const void Position::display() {
    for (int r = rows; r >= 0; r--) {
        cout << "\n";
        for (int c = 0; c < cols; ++c) {
            if (c == this->cindex && r == rindex) {
                cout << "*";
            } else cout << ".";
        }
    }
}