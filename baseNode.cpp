//Ritvik Divanji

#include "baseNode.h"

baseNode::baseNode()= default;

baseNode::baseNode(int row,char seat,bool reserved,char ticketType){
    baseNode::row=row;
    baseNode::seat=seat;
    baseNode::reserved=reserved;
    baseNode::ticketType=ticketType;
}

int baseNode::getRow() const {
    return row;
}

void baseNode::setRow(int row) {
    baseNode::row = row;
}

char baseNode::getSeat() const {
    return seat;
}

void baseNode::setSeat(char seat) {
    baseNode::seat = seat;
}

bool baseNode::isReserved() const {
    return reserved;
}

void baseNode::setReserved(bool reserved) {
    baseNode::reserved = reserved;
}

char baseNode::getTicketType() const {
    return ticketType;
}

void baseNode::setTicketType(char ticketType) {
    baseNode::ticketType = ticketType;
}
