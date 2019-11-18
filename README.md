# C++ Theater Backend (part 2)

Problem: I have been hired by the owner of a very small movie theater to develop the backend for an online ticket reservation system. The program should display the current seating arrangement and allow the patron to select seats. A report should be generated at the end of the program to specify for each individual auditorium and overall for all auditoriums how many seats were sold/unsold and how much money was earned.

Details: The theater is stored as an Auditorium object. This object essentially acts as a "2D linked list" of TheaterSeat nodes derived from the baseNode class, and is created by reading a file in the project directory named "A1.txt". This should be placed in the directory of your executable. Displaying A1.txt would be as follows: 
         

      ABCDEFGHIJKLMNOPQRST
    1 ...##..#####........
    2 ########....####..##
    3 .........##.........
    4 #.#.#.#.#.#.#.#.#.#.
    5 ########.#####.#####
    

A sample of A1.txt is provided. A is an adult ticket ($10), C is a child ticket ($5), S is a senior ticket ($7.50), and "." represents an empty seat.
When displaying the theater to the user, all letters are replaced by a "#" because all the user needs to know is that the seat is reserved, not what type of seat it is. 
