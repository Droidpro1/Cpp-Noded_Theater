//Ritvik Divanji

#ifndef PROJECT2_BASENODE_H
#define PROJECT2_BASENODE_H


class baseNode {
private:
    int row=0;
    char seat{};
    bool reserved=false;
    char ticketType{};
public:
    baseNode();
    baseNode(int,char,bool,char);
    int getRow() const;
    void setRow(int row);
    char getSeat() const;
    void setSeat(char seat);
    bool isReserved() const;
    void setReserved(bool reserved);
    char getTicketType() const;
    void setTicketType(char ticketType);
};


#endif //PROJECT2_BASENODE_H
