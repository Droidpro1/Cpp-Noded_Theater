//Ritvik Divanji

#ifndef PROJECT2_AUDITORIUM_H
#define PROJECT2_AUDITORIUM_H

#include <string>
#include "theaterSeat.h"

class auditorium {
private:
    theaterSeat* first;
    int rows=0;
    int cols=0;
    void setRows();
    void setCols();
    std::string columnHeader="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
public:
    auditorium();
    int getRows() const;
    int getCols() const;
    theaterSeat *getFirst() const;
    void setFirst(theaterSeat *first);
    static void deleteCol(theaterSeat *ptr);
    static void deleteRow(theaterSeat *ptr);


    theaterSeat* bestAvailable(int);
    void reserveSeats(int, char, int, int, int);
    std::string getColumnHeader() const ;
    void writeBack();
    void displayAuditorium();
    void displayReport();
    bool checkAvailable(int, char, int);
    ~auditorium();
};


#endif //PROJECT2_AUDITORIUM_H
