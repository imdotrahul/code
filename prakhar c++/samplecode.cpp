#include <iostream>
#include <iomanip>
using namespace std;


//*********************
//Constants
//*********************
const string line = "----------------------------------";


//*********************
//Declarations
//*********************
int GetChoice();
void GetFirstLast(string& first, string& last);
void DisplayFirstLast(string first, string last);
void GetDim(int& row, int& col);
void PrintBox(int row, int col);
int ConvertDigitToChar(int digit);
void PrintMultTable(int factor);


//*********************
//Driver
//*********************

int main(){
	//Declare variables needed within multiple if clauses below here
	
	int row, col;
	string first, last;
	int digit, factor;
	
	//Loop to control program flow
   
       int choice = GetChoice();
    while (choice != 0){
        if (choice == 1){
            GetFirstLast(first, last);
        }
        else if (choice == 2){
            DisplayFirstLast(first, last);
        }
        else if (choice == 3){
            GetDim(row, col);
        }
        else if (choice == 4){
            PrintBox(row, col);
        }
        else if (choice == 5){
            cout << "Enter a single digit integer: ";
            cin >> digit;
            cout << "The character representation of " << digit << " is " << ConvertDigitToChar(digit) << endl;
        }
        else if (choice == 6){
            cout << "Enter a number to print multiplication table for: ";
            cin >> factor;
            PrintMultTable(factor);
        }
        choice = GetChoice();
    }
    return 0;
}

//*********************
//Definitions
//*********************


//*********************
// Function Name: GetChoice - do not change this routine
//*********************
// Purpose:  To print options to the user for menu options
// Incoming: NA
// Outoing:  NA
// Return:   Choice as an integer
//*********************
int GetChoice(){
   int result = 0;
   cout << endl << line << endl;
   cout << "Enter the choice you want to complete: " << endl;
   cout << "1: Get First and Last name of user" << endl;
   cout << "2: Display First and Last name of user" << endl;
   cout << "3: Get Current Dimensions of row and col" << endl;
   cout << "4: Print a Box" << endl;
   cout << "5: Convert a single digit integer to its char" << endl;
   cout << "6: Print multiplication table" << endl;
   cout << "0: Stop" << endl;
   cout << line << endl;
   cout << "Enter your choice here: ";
   cin >> result;
   cout << line << endl << endl;
   return result;
}

//*********************
// Function Name: GetFirstLast
//*********************
// Purpose:  To prompt for and input the user's first and last name 
// Incoming: NA
// Outoing:  first name as a string, last name as a string
// Return:   NA
//*********************

    void GetFirstLast(string& first, string& last){
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your last name: ";
    cin >> last;
}



//*********************
// Function Name: DisplayFirstLast
//*********************
// Purpose:  To Display the first and last names  
// Incoming: first name as a string, last name as a string
// Outoing:  NA
// Return:   NA
//*********************

void DisplayFirstLast(string first, string last){
    cout << "First Name: " << first << endl;
    cout << "Last Name: " << last << endl;
}


//*********************
// Function Name: GetDimenions
//*********************
// Purpose:  To prompt for and input the row and column number 
// Incoming: NA
// Outoing:  row as an integer, column as an integer
// Return:   NA
//*********************
void GetDim(int& row, int& col){
    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter column number: ";
    cin >> col;
}

//*********************
// Function Name: PrintBox
//*********************
// Purpose:  To print a box given the row and column dimensions 
//           in the shape below where the X's and O's toggle, 
//			 examples given below:
//
//			 3x4			4x3
//		     XOXO 			XOX
//			 XOXO			OXO
//	         XOXO			XOX
//                          OXO
// Incoming: row as integer, col as integer
// Outoing:  NA
// Return:   NA
//*********************

void PrintBox(int rows, int cols) {
    int rowcolumnsum = 0;
    for(int i = 1;i<=rows;i++)
    {
        for(int j = 1;j<=cols;j++)
        {
            rowcolumnsum = i+j;
            if(rowcolumnsum%2==0)
            {
                cout<<"X";
            }
            else{
                cout<<"0";
            }
        }cout << endl;
    }
        
    
}

// Convert digit to its character equivalent
 // Return 'Z' if the digit is not in the range [0..9]
//*********************
// Function Name: ConvertDigitToChar
//*********************
// Purpose:  Take the given integer digit and return the 
//           digit in its character form. Should the integer
//			 parameter be larger or smaller than a single 
//			 non-negative digit, the function should return
//			 the letter 'Z'. That is the integer must be
//		     in the range of [0..9] to be converted to its
//			 character equivalent
// Incoming: digit as an integer
// Outoing:  NA
// Return:   digit as a character
//*********************

int ConvertDigitToChar(int digit) {
	
    if (digit >= 0 && digit <= 9) {
    	
        char number = digit + '0';
        int ascii = (int) number;
        return ascii; // convert digit to its corresponding character form
    	
	} else {
        return 'Z'; // return 'Z' if digit is not a single non-negative digit
    }
}

  
//*********************
// Function Name: PrintMultTable
//*********************
// Purpose:  Take the given integer factor, print all multiplcation 
//			 facts [0..12] for each factor from 0 up to the factor 
//			 given in the parameter. Print a row and column labels 
//		     such that the intersection of the row and column label
//			 is the product of the row and column. See below for an 
//			 example with a parameter factor of 2
//     0    1       2       3       4       5       6       7       8       9       10      11      12
//  0: 0    0       0       0       0       0       0       0       0       0       0       0       0
//  1: 0    1       2       3       4       5       6       7       8       9       10      11      12
//  2: 0    2       4       6       8       10      12      14      16      18      20      22      24

// Incoming: factor as an integer
// Outoing:  NA
// Return:   NA
//*********************


	void PrintMultTable(int factor){
    // Print the row labels
    cout << "     ";
    for (int col = 0; col <= 12; col++) {
        cout << setw(4) << col;
    }
    cout << endl;
    
    // Print the top separator row
    cout << "   " << line << endl;
    
    // Print the multiplication table rows
    for (int row = 0; row <= factor; row++) {
        cout << setw(2) << row << ": ";
        for (int col = 0; col <= 12; col++) {
            cout << setw(4) << row * col;
        }
        cout << endl;
    }
}