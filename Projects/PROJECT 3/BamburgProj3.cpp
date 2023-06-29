// Jason Bamburg 
// jbamburg@my.athens.edu
// 00104266
// Project 3 Movies 




#include <iostream>
#include <stdlib.h>

using namespace std;

void movieName ();
void admin ();


char freeBird330[7][8] = {{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'}};
char freeBird600[7][8] = {{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'}};
char Bethooven530[7][8] = {{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'}};
char Bethooven730[7][8] = {{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'}};

int totalTicketsGlob = 0;
int adultTicketsGlob = 0;
int childTicketsGlob = 0;
int moneyTotal = 0;
int moneyTotalAdult = 0;
int moneyTotalChild = 0;

int totalTicketsGlob600 = 0;
int adultTicketsGlob600 = 0;
int childTicketsGlob600 = 0;
int moneyTotal600 = 0;
int moneyTotalAdult600 = 0;
int moneyTotalChild600 = 0;

int totalTicketsGlob530 = 0;
int adultTicketsGlob530 = 0;
int childTicketsGlob530 = 0;
int moneyTotal530 = 0;
int moneyTotalAdult530 = 0;
int moneyTotalChild530 = 0;

int totalTicketsGlob730 = 0;
int adultTicketsGlob730 = 0;
int childTicketsGlob730 = 0;
int moneyTotal730 = 0;
int moneyTotalAdult730 = 0;
int moneyTotalChild730 = 0;


int main(){
    while(true){
        cout << "\n";
        movieName();
    }

}




void movieName (){
    string movieName = " "; 
    string movieTime = " ";

    cout << "---------------------------------" << endl;
    cout << "(1) Free Birds      3:30     6:00" << endl;
    cout << "(2) Bethooven       5:30     7:30" << endl;
    cout << "---------------------------------" << endl;
    cout << "\nAdult Tickets are: $6.00 (matinee before 6:00pm) $8.00 (evening)" << endl;
    cout << "Child Tickets are: $4.00 (matinee before 6:00pm) $6.00 (evening)" << endl;

    cout << "\nPlease pick a movie to attend (1-2): " << endl;
    cin >> movieName; 


//IF statements w/ arrays:
    if(movieName == "1"){
        cout << "\nPick a movie time for Free Birds. 3:30 or 6:00: "; 
        cin >> movieTime;

        if(movieTime == "3:30"){
            int adultTickets = 0;
            int childTickets = 0;
            //Adult Tickets
            cout << "\nHow many adult tickets would you like to buy: ";
            cin >> adultTickets;

            moneyTotalAdult = adultTickets * 6;
            adultTicketsGlob += adultTickets;

            //Child Tickets
            cout << "\nHow many child tickets would you like to buy: ";
            cin >> childTickets;

            moneyTotalChild = childTickets * 4;
            childTicketsGlob += childTickets;

            //Total Tickets 
            totalTicketsGlob = adultTickets + childTickets; 

            moneyTotal = moneyTotalAdult + moneyTotalChild;

            cout << "\nYour total cost was: $" << moneyTotal << endl; 

            int totalTickets = adultTickets + childTickets;

            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << freeBird330[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }


            for (int i = 0; i < totalTickets; i++){
	            int row = 0;
	            int column = 0;
	            cout << "\nWhat seat position for person " << i+1 << "? " << endl;
	            cout << "Row(1-7): "; 
	            cin >> row;
	            cout << "Column(1-8): ";
	            cin >> column;
	            freeBird330[row - 1][column - 1] = '#';
            }
            
            // Column and rows, covid detection system    
            // i = row
            // j = column
            // left - right - up - down
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(freeBird330[i][j] == '#'){
                        if(j != 0){
                            if(freeBird330[i-1][j] != '#'){
                                freeBird330[i-1][j] = 'X';
                            }
                        }

                        if(j != 7){
                            if(freeBird330[i+1][j] != '#'){
                                freeBird330[i+1][j] = 'X';
                            }
                        }

                        if(i != 0){
                            if(freeBird330[i][j-1] != '#'){
                                freeBird330[i][j-1] = 'X';
                            }
                        }

                        if(i != 6){
                            if(freeBird330[i][j+1] != '#'){
                                freeBird330[i][j+1] = 'X';
                            }
                        }
                    }
                }
            }





            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << freeBird330[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }
        }

        else if(movieTime == "6:00"){
            int adultTickets = 0;
            int childTickets = 0;
            //Adult Tickets
            cout << "\nHow many adult tickets would you like to buy: ";
            cin >> adultTickets;

            moneyTotalAdult600 = adultTickets * 8;
            adultTicketsGlob600 += adultTickets;

            //Child Tickets
            cout << "\nHow many child tickets would you like to buy: ";
            cin >> childTickets;

            moneyTotalChild600 = childTickets * 6;
            childTicketsGlob600 += childTickets;

            //Total Tickets 
            totalTicketsGlob600 = adultTickets + childTickets; 

            moneyTotal600 = moneyTotalAdult600 + moneyTotalChild600;

            cout << "\nYour total cost was: $" << moneyTotal600 << endl; 

            int totalTickets = adultTickets + childTickets;

            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << freeBird600[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }


            for (int i = 0; i < totalTickets; i++){
	            int row = 0;
	            int column = 0;
	            cout << "\nWhat seat position for person " << i+1 << "? " << endl;
	            cout << "Row(1-7): "; 
	            cin >> row;
	            cout << "Column(1-8): ";
	            cin >> column;
	            freeBird600[row - 1][column - 1] = '#';
            }
            
            // Column and rows, covid detection system    
            // i = row
            // j = column
            // left - right - up - down
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(freeBird600[i][j] == '#'){
                        if(j != 0){
                            if(freeBird600[i-1][j] != '#'){
                                freeBird600[i-1][j] = 'X';
                            }
                        }

                        if(j != 7){
                            if(freeBird600[i+1][j] != '#'){
                                freeBird600[i+1][j] = 'X';
                            }
                        }

                        if(i != 0){
                            if(freeBird600[i][j-1] != '#'){
                                freeBird600[i][j-1] = 'X';
                            }
                        }

                        if(i != 6){
                            if(freeBird600[i][j+1] != '#'){
                                freeBird600[i][j+1] = 'X';
                            }
                        }
                    }
                }
            }





            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << freeBird600[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }
        }
        else{
            cout << "Please input a correct movie time.";
        }
    }

    else if(movieName == "2"){
        cout << "\nPick a movie time for Bethooven. 5:30 or 7:30: "; 
        cin >> movieTime;

        if(movieTime == "5:30"){
            int adultTickets = 0;
            int childTickets = 0;
            //Adult Tickets
            cout << "\nHow many adult tickets would you like to buy: ";
            cin >> adultTickets;

            moneyTotalAdult530 = adultTickets * 6;
            adultTicketsGlob530 += adultTickets;

            //Child Tickets
            cout << "\nHow many child tickets would you like to buy: ";
            cin >> childTickets;

            moneyTotalChild530 = childTickets * 4;
            childTicketsGlob530 += childTickets;

            //Total Tickets 
            totalTicketsGlob530 = adultTickets + childTickets; 

            moneyTotal530 = moneyTotalAdult530 + moneyTotalChild530;

            cout << "\nYour total cost was: $" << moneyTotal530 << endl; 

            int totalTickets = adultTickets + childTickets;

            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << Bethooven530[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }


            for (int i = 0; i < totalTickets; i++){
	            int row = 0;
	            int column = 0;
	            cout << "\nWhat seat position for person " << i+1 << "? " << endl;
	            cout << "Row(1-7): "; 
	            cin >> row;
	            cout << "Column(1-8): ";
	            cin >> column;
	            Bethooven530[row - 1][column - 1] = '#';
            }
            
            // Column and rows, covid detection system    
            // i = row
            // j = column
            // left - right - up - down
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(Bethooven530[i][j] == '#'){
                        if(j != 0){
                            if(Bethooven530[i-1][j] != '#'){
                                Bethooven530[i-1][j] = 'X';
                            }
                        }

                        if(j != 7){
                            if(Bethooven530[i+1][j] != '#'){
                                Bethooven530[i+1][j] = 'X';
                            }
                        }

                        if(i != 0){
                            if(Bethooven530[i][j-1] != '#'){
                                Bethooven530[i][j-1] = 'X';
                            }
                        }

                        if(i != 6){
                            if(Bethooven530[i][j+1] != '#'){
                                Bethooven530[i][j+1] = 'X';
                            }
                        }
                    }
                }
            }





            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << Bethooven530[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }
        }
        





        else if(movieTime == "7:30"){
            int adultTickets = 0;
            int childTickets = 0;
            //Adult Tickets
            cout << "\nHow many adult tickets would you like to buy: ";
            cin >> adultTickets;

            moneyTotalAdult730 = adultTickets * 8;
            adultTicketsGlob730 += adultTickets;

            //Child Tickets
            cout << "\nHow many child tickets would you like to buy: ";
            cin >> childTickets;

            moneyTotalChild730 = childTickets * 6;
            childTicketsGlob730 += childTickets;

            //Total Tickets 
            totalTicketsGlob730 = adultTickets + childTickets; 

            moneyTotal730 = moneyTotalAdult730 + moneyTotalChild730;

            cout << "\nYour total cost was: $" << moneyTotal730 << endl; 

            int totalTickets = adultTickets + childTickets;

            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << Bethooven730[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }


            for (int i = 0; i < totalTickets; i++){
	            int row = 0;
	            int column = 0;
	            cout << "\nWhat seat position for person " << i+1 << "? " << endl;
	            cout << "Row(1-7): "; 
	            cin >> row;
	            cout << "Column(1-8): ";
	            cin >> column;
	            Bethooven730[row - 1][column - 1] = '#';
            }
            
            // Column and rows, covid detection system    
            // i = row
            // j = column
            // left - right - up - down
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(Bethooven730[i][j] == '#'){
                        if(j != 0){
                            if(Bethooven730[i-1][j] != '#'){
                                Bethooven730[i-1][j] = 'X';
                            }
                        }

                        if(j != 7){
                            if(Bethooven730[i+1][j] != '#'){
                                Bethooven730[i+1][j] = 'X';
                            }
                        }

                        if(i != 0){
                            if(Bethooven730[i][j-1] != '#'){
                                Bethooven730[i][j-1] = 'X';
                            }
                        }

                        if(i != 6){
                            if(Bethooven730[i][j+1] != '#'){
                                Bethooven730[i][j+1] = 'X';
                            }
                        }
                    }
                }
            }





            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 8; j++){
                    if(j == 0 && i == 0){
                        cout << "\nSeats 1  2  3  4  5  6  7  8\n";
                    }
                    if(j == 0){
                        cout << "Row " << i + 1 << " ";

                    }
         
                    cout << Bethooven730[i][j] << "  ";

                    if(j == 7){
                        cout << "\n";

                    }

                }
            }
        }
        else{
            cout << "Please input a correct movie time.";
        }
    }

// ADMIN CALL
    else if(movieName == "-99"){
        admin();

    }
    else{
        cout << "Please input either 1 or 2.";
    }
} 


// ADMIN FUNCTION 
void admin(){
    string choice = " ";

    cout << "\nADMINISTRATOR ONLY" << endl;
    cout << "(1) Tickets Sold\n(2) Ticket Sales/Profits\n(3) Back to Movie Options\n(4) Shut Down Program" << endl;
    cin >> choice;

    if(choice == "1"){
        cout << "Free Birds 3:30 Total Tickets Sold: " << totalTicketsGlob << endl; 
        cout << "Free Birds 6:00 Total Tickets Sold: " << totalTicketsGlob600 << endl; 
        cout << "Bethooven 5:30 Total Tickets Sold: " << totalTicketsGlob530 << endl; 
        cout << "Bethooven 7:30 Total Tickets Sold: " << totalTicketsGlob730 << endl; 
        
    }

    if(choice == "2"){
        cout << "Free Birds 3:30 Total Tickets Sales: $" << moneyTotal << endl; 
        cout << "Free Birds 6:00 Total Tickets Sales: $" << moneyTotal600 << endl;
        cout << "Bethooven 5:30 Total Tickets Sales: $" << moneyTotal530 << endl;
        cout << "Bethooven 7:30 Total Tickets Sales: $" << moneyTotal730 << endl;

    }

    if(choice == "3"){
        cout << "\n"; 
        movieName();

    }

    if(choice == "4"){
        abort();
    }

}







