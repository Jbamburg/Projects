// Jason Bamburg 
// jbamburg@my.athens.edu 
// 00104266
// Project 2

#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main()
{

    srand(time(NULL));
    int total, totalDealer, card1p, card2p, card3p, newTotal, choice, card1d, card2d, card3d, bet, winnings = 0;
    int balance = 0;
    char Ccard1p, Ccard2p, Ccard3p, Ccard1d, Ccard2d, Ccard3d;
    char blackjack = '1';
    char gameHistory = '2';
    char quitGame = '3';
    char choiceGame;
    char Hit;
    bool ShowThirdCard = false;
    bool playAgain = true;


    cout << "[===========================================]\n";
    cout << "Welcome to Blackjack!" << endl;
    cout << "(1) Play BlackJack" << endl;
    cout << "(2) View Game History" << endl;
    cout << "(3) Quit Game" << endl;
    cout << "[===========================================]\n";
    cout << "Enter your choice and press return: " << endl;
    cin >> choice;


    if (choice == 1) {
        cout << "Input how much money you'd like to play with: " << endl;
        cin >> balance;

        while (balance < 10) {
            cout << "Please input a value of 10 or above." << endl;
            cin >> balance;
        }

        cout << "Enter your bet: " << endl;
        cin >> bet;

        while (bet < 10 or bet > 150 or bet > balance) {
            cout << "Please input a bet between 10-150 and less than your total balance." << endl;
            cin >> bet;
        }
        balance = balance - bet;



        while (playAgain == true) {
            ShowThirdCard = false;
            total = 0;
            totalDealer = 0;
            card1p = rand() % 13 + 1;
            card2p = rand() % 13 + 1;
            card3p = rand() % 13 + 1;

            card1d = rand() % 13 + 1;
            card2d = rand() % 13 + 1;
            card3d = rand() % 13 + 1;


            if (card1p < 9) {
                card1p += 1;
                int num = card1p - 2;
                Ccard1p = '0' + card1p;
            }
            else if (card1p > 10 && card1p <= 12) {
                if (card1p == 9) {
                    Ccard1p = 'T';
                }
                else if (card1p == 10) {
                    Ccard1p = 'J';
                }
                else if (card1p == 11) {
                    Ccard1p = 'Q';
                }
                else if (card1p == 12) {
                    Ccard1p = 'K';
                }
                card1p = 10;

            }
            else {
                card1p = 11;
                Ccard1p = 'A';
            }



            if (card2p < 9) {
                card2p += 1;
                int num = card2p - 2;
                Ccard2p = '0' + card2p;
            }
            else if (card2p > 10 && card2p <= 12) {
                if (card2p == 9) {
                    Ccard2p = 'T';
                }
                else if (card2p == 10) {
                    Ccard2p = 'J';
                }
                else if (card2p == 11) {
                    Ccard2p = 'Q';
                }
                else if (card2p == 12) {
                    Ccard2p = 'K';
                }
                card2p = 10;

            }
            else {
                card2p = 11;
                Ccard2p = 'A';
            }



            if (card3p < 9) {
                card3p += 1;
                int num = card3p - 2;
                Ccard3p = '0' + card3p;
            }
            else if (card3p > 10 && card3p <= 12) {
                if (card3p == 9) {
                    Ccard3p = 'T';
                }
                else if (card3p == 10) {
                    Ccard3p = 'J';
                }
                else if (card3p == 11) {
                    Ccard3p = 'Q';
                }
                else if (card3p == 12) {
                    Ccard3p = 'K';
                }
                card3p = 10;

            }
            else {
                card3p = 11;
                Ccard3p = 'A';
            }



            if (card1d < 9) {
                card1d += 1;
                int num = card1d - 2;
                Ccard1d = '0' + card1d;
            }
            else if (card1d > 10 && card1d <= 12) {
                if (card1d == 9) {
                    Ccard1d = 'T';
                }
                else if (card1d == 10) {
                    Ccard1d = 'J';
                }
                else if (card1d == 11) {
                    Ccard1d = 'Q';
                }
                else if (card1d == 12) {
                    Ccard1d = 'K';
                }
                card1d = 10;

            }
            else {
                card1d = 11;
                Ccard1d = 'A';
            }




            if (card2d < 9) {
                card2d += 1;
                int num = card2d - 2;
                Ccard2d = '0' + card2d;
            }
            else if (card2d > 10 && card2d <= 12) {
                if (card2d == 9) {
                    Ccard2d = 'T';
                }
                else if (card2d == 10) {
                    Ccard2d = 'J';
                }
                else if (card2d == 11) {
                    Ccard2d = 'Q';
                }
                else if (card2d == 12) {
                    Ccard2d = 'K';
                }
                card2d = 10;

            }
            else {
                card2d = 11;
                Ccard2d = 'A';
            }




            if (card3d < 9) {
                card3d += 1;
                int num = card3d - 2;
                Ccard3d = '0' + card3d;
            }
            else if (card3d > 10 && card3d <= 12) {
                if (card3d == 9) {
                    Ccard3d = 'T';
                }
                else if (card3d == 10) {
                    Ccard3d = 'J';
                }
                else if (card3d == 11) {
                    Ccard3d = 'Q';
                }
                else if (card3d == 12) {
                    Ccard3d = 'K';
                }
                card3d = 10;

            }
            else {
                card3d = 11;
                Ccard3d = 'A';
            }

            total = card1p + card2p;
            totalDealer = card1d + card2d;

            cout << "Here are your first cards:" << Ccard1p << ", " << Ccard2p << endl;
            cout << "Here are the number values of your cards: " << card1p << ", " << card2p << ", " << endl;
            cout << "Your total is: " << total << endl;

            cout << "Dealers Cards: " << "?, " << Ccard2d << endl;
            cout << "Dealers Total is: >" << Ccard2d << endl;

            if (total <= 21) {
                if (total == 21 && totalDealer != 21) {
                    cout << "The dealer's cards are: " << card1d << ", " << card2d << endl;
                    cout << "You hit blackjack! You win!" << endl;

                    balance = balance + (bet * 2);
                }

                else if (total == 21 && totalDealer == 21) {
                    cout << "Both the dealer and the player got 21, No one wins!" << endl;
                    balance = balance + bet;
                }

                else {
                    if (totalDealer == 21) {
                        cout << "Dealer has 21!\nDealer wins!" << endl;
                    }
                    else {
                        //ACTUAL GAMEPLAY
                        cout << "Hit? Yes(y) No(n)" << endl;
                        cin >> Hit;

                        if (Hit == 'y') {   //------------------------------------------------------------------------------HIT
                            total += card3p;
                            cout << "Here are your cards: " << Ccard1p << ", " << Ccard2p << ", " << Ccard3p << endl;
                            cout << "Your total is: " << total << endl;

                            if (total > 21) {
                                cout << "You Lose!" << endl;
                            }
                            else if (totalDealer < 17) {
                                totalDealer += card3d;
                                cout << "Dealer Hits!" << endl;
                                ShowThirdCard = true;
                            }
                            if (total == 21) {

                                if (totalDealer > 21 || totalDealer < 21) {
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                else if (totalDealer == 21) {
                                    cout << "Player and Dealer Push!" << endl;
                                    balance += bet;
                                }

                            }

                            else if (total < 21) { // If we have less than 21
                              
                                if (totalDealer == 21) {
                                    cout << "Dealer Got BlackJack, Dealer Wins!" << endl;
                                }
                                if (totalDealer > 21) {
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                if (totalDealer > total && totalDealer < 21) {
                                    cout << "Dealer Wins!" << endl;
                                }
                                if (total > totalDealer) {
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                if (total == totalDealer) {
                                    cout << "Player and Dealer Push!" << endl;
                                    balance += bet; // You get your bet back
                                }
                            }
                        }



                        else if (Hit == 'n') { // Not Hitting
                            if (totalDealer < 17) {
                                totalDealer += card3d;
                                cout << "Dealer Hits" << endl;
                                ShowThirdCard = true;
                                if (totalDealer > 21) {
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                else if (totalDealer > total) { // dealer's total is higher than yours or 21
                                    cout << "You Lose!" << endl;
                                }
                                else if (total > totalDealer) {
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                else if (total == totalDealer) {
                                    cout << "Player and Dealer Push!" << endl;
                                    balance += bet; // You get your bet back
                                }
                            }
                            else {
                                if (totalDealer > 21) {
                                    cout << "Dealer Busted!" << endl;
                                    cout << "You Win " << bet * 2 << " dollars" << endl;
                                    balance += bet * 2;
                                }
                                if (totalDealer > 17 && totalDealer < 21) {
                                    if (totalDealer > total) {
                                        cout << "You Lose!" << endl;
                                    }
                                    else if (totalDealer < total) {
                                        cout << "You Win " << bet * 2 << " dollars" << endl;
                                        balance += bet * 2;
                                    }
                                    else {
                                        cout << "Player and Dealer Push!" << endl;
                                        balance += bet; // You get your bet back
                                    }
                                }
                            }
                        }





                    }
                }


                cout << "Dealers Cards: " << Ccard1d << ", " << Ccard2d << endl;
                if (ShowThirdCard == true) {
                    cout << "Dealers third card is: " << Ccard3d << endl;
                }

            }

            cout << "Do you want to play again? y/n" << endl;
            cin >> choiceGame;


            if (choiceGame == 'n') {
                cout << "Thank you for playing!" << endl;
                cout << "Your remaining balance is: " << balance << endl;

                playAgain = false;
            }

            else {
                cout << "Balance = " << balance << endl;
                cout << "Enter your bet:" << endl;
                cin >> bet;
                while (bet < 10 or bet > 150 or bet > balance) {
                    cout << "Please input a bet between 10-150 and less than your total balance." << endl;
                    cin >> bet;
                }
                balance = balance - bet;
            }

        }
    }
if (choice == 2) {
    fstream myfile;
    myfile.open("BamburgHistory.txt", ios::in, ios::out);

    if (!myfile.good()); {
        cout << "Not a valid choice.\n";
        playAgain = true;
    }
}


if (choice == 3) {
    cout << "Thank you for playing!" << endl;
    cout << "Your remaining balance is: " << balance << endl;
}




    return 0;
}