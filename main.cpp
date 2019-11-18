//Ritvik Divanji

#include <iostream>
#include <cctype>
#include "theaterSeat.h"
#include "auditorium.h"

using namespace std;

int main(){

    /*All input will be a string, then will be casted/changed to the proper datatype after validation
    Validation will take into account length, range, and type depending on the input
    For example, if the input requires a letter, use the isletter function
    Length of ALL input should only be 1
    If the program expects a char and gets a string of chars, it would loop the input statement until it gets ONE character.*/

    string userInput;
    auditorium a= auditorium();
    do{
        do{
            cout<<"1. Reserve Seats\n2. Exit"<<endl;
            cin>>userInput;
        }while(!(userInput.length()==1 && (userInput=="1" || userInput=="2")));
        if(userInput=="1"){
            a.displayAuditorium();
            string r;
            string col;
            string adult;
            string child;
            string senior;
            bool isNum;
            do{
                cout<<"\nWhich row would you like to reserve a seat in?"<<endl;
                cin>>r;
                //this is for input validation, checks if the entire input is a valid digit
                isNum=true;
                for(int i=0;i<r.length();i++){
                    if(!isdigit(r[i])) {
                        isNum = false;
                        break;
                    }
                }
            }while(!isNum || (stoi(r)>a.getRows()|| stoi(r)<=0));
            do{
                cout<<"\nWhich column would you like to reserve a seat in?"<<endl;
                cin>>col;
                isNum=true;
                for(int i=0;i<col.length();i++){
                    if(!isalpha(col[i])) {
                        isNum = false;
                        break;
                    }
                }
                //convert the entire string to uppercase
                for(int i=0;i<col.length();i++){
                    col[i]=toupper(col[i]);
                }
            }while(!isNum || (a.getColumnHeader()).find(col)==-1);
            do{
                do{
                    cout<<"\nHow many adult seats would you like to reserve?"<<endl;
                    cin>>adult;
                    isNum=true;
                    for(int i=0;i<adult.length();i++){
                        if(!isdigit(r[i])) {
                            isNum = false;
                            break;
                        }
                    }
                }while(!isNum || stoi(adult)<0 || stoi(adult)>a.getCols());
                do{
                    cout<<"\nHow many child seats would you like to reserve?"<<endl;
                    cin>>child;
                    isNum=true;
                    for(int i=0;i<child.length();i++){
                        if(!isdigit(r[i])) {
                            isNum = false;
                            break;
                        }
                    }
                }while(col.length()!=1 || !isNum || stoi(child)<0 || stoi(child)>a.getCols());
                do{
                    cout<<"\nHow many senior seats would you like to reserve?"<<endl;
                    cin>>senior;
                    isNum=true;
                    for(int i=0;i<senior.length();i++){
                        if(!isdigit(r[i])) {
                            isNum = false;
                            break;
                        }
                    }
                }while(!isNum || stoi(senior)<0 || stoi(senior)>a.getCols());
            }while(stoi(adult)+stoi(child)+stoi(senior)>a.getCols() || stoi(adult)+stoi(child)+stoi(senior)<=0);
            if(a.checkAvailable(stoi(r), col[0], stoi(adult)+stoi(child)+stoi(senior))){
                a.reserveSeats(stoi(r), col[0], stoi(adult), stoi(child), stoi(senior));
            }
            else{
                cout<<"\nThose seats aren't available\nWould you like to reserve the best available seats?"<<endl;
                cout<<"\n1. Yes\n2. No"<<endl;
                cin>>userInput;
                if(userInput!="2"){
                    theaterSeat* seat=a.bestAvailable(stoi(adult)+stoi(child)+stoi(senior));
                    if(seat==nullptr){
                        cout<<"No best seats were found.\nSorry :("<<endl;
                    }
                    else {
                        cout<<"Best seat reserved at "<<seat->getRow()<<seat->getSeat()<<endl;
                        a.reserveSeats(seat->getRow(), seat->getSeat(), stoi(adult), stoi(child), stoi(senior));
                    }
                }
            }
            a.displayReport();
            a.writeBack();
        }
    }while(userInput!="2");
    a.displayReport();
    a.writeBack();
}
