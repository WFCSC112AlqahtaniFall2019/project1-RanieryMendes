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
    vector <vector <string> > matrix (3, board);

    srand(time(0));

    //Welcoming statement to the user
    cout << "Hello! Welcome to Battlefield! " << "Let's play!" << endl << "You just need to enter the position of the row and column you would like to mark on the board. They are both from 1 to 3. Enter each one at a time. " << endl << endl;

    // initializing the vectors within the matrix

     for (int i =0; i < 3; ++i){
         for (int j= 0; j < 3; ++j){
       matrix.at(i).at(j) = " ";
         }

     }

    // print board (matrix)
    cout << " " << matrix.at(0).at(0) << " " << "| " << matrix.at(0).at(1) << " | " << matrix.at(0).at(2) << endl;
    cout << "-----------" << endl;
    cout << " " << matrix.at(1).at(0) << " " << "| " << matrix.at(1).at(1) << " | " << matrix.at(1).at(2) << endl;
    cout << "-----------" << endl;
    cout << " " << matrix.at(2).at(0) << " " << "| " << matrix.at(2).at(1) << " | " << matrix.at(2).at(2) << endl;
    cout << " " << endl;

    // set a random location for the ship
    int rowComputer;
    int columnComputer;
    rowComputer = rand() % 2;
    columnComputer = rand() % 2;


    int guesses = 1; // counter for the number of guesses made by the user


    bool  game = true; // boolean to control the  while loop below

    // loop for  the interaction with the user

     while (game) {


         //get user's input for row position

         cout << "Please enter the row of the position you would like to mark on the board. " << endl;
         cin >> rowUser;

         // while loop to check if the row is within the matrix range. If not ask for new input
         while (rowUser < 1 || rowUser > 3 ) {

             cout << "The row entered does not fit in the range of the matrix. Please insert another number. The row ranges from 1 to 3." << endl;
             cin >> rowUser;
         }

         //get user's input for column position
         cout << "Please enter the column of the position you would like to mark on the board. " << endl;
         cin >> columnUser;

         // while loop to check if the column is within the matrix range. If not ask for new input
         while (columnUser < 1 || columnUser > 3 ) {

             cout << "The column entered does not fit in the range of the matrix. Please insert another number. The column ranges from 1 to 3." << endl;
             cin >> columnUser;
         }

         //Adapt the user's inputs to the functioning of the vector (index goes from 0 to 2)

         rowUser = rowUser - 1;
         columnUser = columnUser - 1;

         // Mark on the board the position the user wants

         matrix.at(rowUser).at(columnUser) = "X";


         //  check if the user's inputs match the position where the ship is. If yes, show it on the matrix

         if ((rowUser == rowComputer) && (columnUser == columnComputer))
         {
             matrix.at(rowUser).at(columnComputer) = "O";
            cout << "Congratulations!! You won the game. The ship was at row " << rowUser + 1 << " column "<< columnUser + 1 << ". You sunk it in " << guesses << " guesses." << endl << " "<< endl;
             cout << " " << matrix.at(0).at(0) << " " << "| " << matrix.at(0).at(1) << " | " << matrix.at(0).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrix.at(1).at(0) << " " << "| " << matrix.at(1).at(1) << " | " << matrix.at(1).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrix.at(2).at(0) << " " << "| " << matrix.at(2).at(1) << " | " << matrix.at(2).at(2) << endl;
             cout << " " << endl;

          // set game as false in order to stop the while loop
          game = false;
         }


         // user's inputs do not match  the position of the ship. Show location  marked on the matrix by the user

        else {
             cout << " " << matrix.at(0).at(0) << " " << "| " << matrix.at(0).at(1) << " | "
                  << matrix.at(0).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrix.at(1).at(0) << " " << "| " << matrix.at(1).at(1) << " | "
                  << matrix.at(1).at(2) << endl;
             cout << "-----------" << endl;
             cout << " " << matrix.at(2).at(0) << " " << "| " << matrix.at(2).at(1) << " | "
                  << matrix.at(2).at(2) << endl;
             cout << " " << endl;

             // re-initialize the vectors within the matrix

             for (int i = 0; i < 3; ++i) {
                 for (int j = 0; j < 3; ++j) {
                     matrix.at(i).at(j) = " ";
                 }

             }

             cout <<  "Please try again!" << endl  ;

         }

         guesses++; // increment the number of guesses
     }

    return 0;
}