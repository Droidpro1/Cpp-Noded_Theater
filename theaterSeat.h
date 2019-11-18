//Ritvik Divanji

#ifndef PROJECT2_THEATERSEAT_H
#define PROJECT2_THEATERSEAT_H


#include "baseNode.h"

class theaterSeat: public baseNode {
private:
    theaterSeat* up=nullptr;
    theaterSeat* down=nullptr;
    theaterSeat* left=nullptr;
    theaterSeat* right=nullptr;
public:
    theaterSeat();
    theaterSeat(int,char,bool,char);
    theaterSeat *getUp() const;
    void setUp(theaterSeat *up);
    theaterSeat *getDown() const;
    void setDown(theaterSeat *down);
    theaterSeat *getLeft() const;
    void setLeft(theaterSeat *left);
    theaterSeat *getRight() const;
    void setRight(theaterSeat *right);
};


#endif //PROJECT2_THEATERSEAT_H
