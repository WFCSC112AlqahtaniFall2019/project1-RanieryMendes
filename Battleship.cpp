#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    //variables to get the user's inputs
    int rowUser;
    int columnUser;

    //declare and initialize variables that will set the vectors' lengths
    int row = 3;
    int column = 3;

    // matrix
    vector <string> board (3);
    vector <vector <string> > matrixTwo (3, board);

    srand(time(0));

    //Instructions to the user
    cout << "Hello! Welcome to Battlefield! " << "Let's play!" << endl << "Please enter the position of the row and column you would like to mark on the board. They are both from 1 to 3. Enter each one at a time. " << endl << endl;


     // initializing the vectors within the matrix

     for (int i =0; i < 3; ++i){
         for (int j= 0; j < 3; ++j){
       matrixTwo.at(i).at(j) = " ";
         }

     }
// print board (matrix)
    cout << " " << matrixTwo.at(0).at(0) << " " << "| " << matrixTwo.at(0).at(1) << " | " << matrixTwo.at(0).at(2) << endl;
    cout << "-----------" << endl;
    cout << " " << matrixTwo.at(1).at(0) << " " << "| " << matrixTwo.at(1).at(1) << " | " << matrixTwo.at(1).at(2) << endl;
    cout << "-----------" << endl;
    cout << " " << matrixTwo.at(2).at(0) << " " << "| " << matrixTwo.at(2).at(1) << " | " << matrixTwo.at(2).at(2) << endl;
    cout << " " << endl;

// set a random location for the ship
    int rowComputer;
    int columnComputer;
    rowComputer = rand() % 2;
    columnComputer = rand() % 2;


    int guesses = 1; // counter for the number of guesses made by the user

    // loop for  the interaction with the user
    bool  game = true;

     while (game) {


         cin >> rowUser;
         cin >> columnUser;

         rowUser = rowUser - 1;
         columnUser = columnUser - 1;
         matrixTwo.at(rowUser).at(columnUser) = "X";


         if ((rowUser == rowComputer) && (columnUser == columnComputer))
         {
            matrixTwo.at(rowUser).at(columnComputer) = "O";
            cout << "Congratulations!! You won the game. The ship was at row " << rowUser + 1 << " column "<< columnUser + 1 << ". You sunk it in " << guesses << " guesses." << endl << " "<< endl;
             cout << " " << matrixTwo.at(0).at(0) << " " << "| " << matrixTwo.at(0).at(1) << " | " << matrixTwo.at(0).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrixTwo.at(1).at(0) << " " << "| " << matrixTwo.at(1).at(1) << " | " << matrixTwo.at(1).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrixTwo.at(2).at(0) << " " << "| " << matrixTwo.at(2).at(1) << " | " << matrixTwo.at(2).at(2) << endl;
             cout << " " << endl;


          game = false;
         }


        else {
             cout << " " << matrixTwo.at(0).at(0) << " " << "| " << matrixTwo.at(0).at(1) << " | "
                  << matrixTwo.at(0).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrixTwo.at(1).at(0) << " " << "| " << matrixTwo.at(1).at(1) << " | "
                  << matrixTwo.at(1).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrixTwo.at(2).at(0) << " " << "| " << matrixTwo.at(2).at(1) << " | "
                  << matrixTwo.at(2).at(2) << endl;
             cout << " " << endl;

// re-initialize the vectors within the matrix

             for (int i = 0; i < 3; ++i) {
                 for (int j = 0; j < 3; ++j) {
                     matrixTwo.at(i).at(j) = " ";
                 }

             }

             cout <<  "Please try again. Enter the position of the row and column you would like to mark on the board. They are from 1 to 3 " << endl << " " << endl;

         }

         guesses++; // increment the number of guesses
     }

    return 0;
}