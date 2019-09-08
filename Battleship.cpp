#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    //variables to get user's inputs
    int rowUser;
    int columnUser;

    int row = 3;
    int column = 3;

    vector <int> vecRow (row,0);
    vector < vector <int> > matrix (column,  vecRow) ;
    srand(time(0));


    cout << "Hello! " << endl << "Please enter the position of the row and column you would like to mark on the board. They are from 1 to 3 " << endl;



     vector <string> board (3);
     vector <vector <string> > matrixTwo (3, board);


     // initializing the vectors within the board

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

// setting a random location for the ship
    int rowComputer;
    int columnComputer;
    rowComputer = rand() % 2;
    columnComputer = rand() % 2;


    int guesses = 1; // counter for the number of guesses made by the user

    // loop for interactions with the user
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
            cout << "Congratulations!! You won the game. The ship was at row " << rowUser + 1 << " column "<< columnUser + 1 << ". You sunk the ship in " << guesses << " guesses." << endl << " "<< endl;
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


             for (int i = 0; i < 3; ++i) {
                 for (int j = 0; j < 3; ++j) {
                     matrixTwo.at(i).at(j) = " ";
                 }

             }

             cout <<  "Please try again. Enter the position of the row and column you would like to mark on the board. They are from 1 to 3 " << endl << " " << endl;

         }
         guesses++;
     }















    return 0;
}