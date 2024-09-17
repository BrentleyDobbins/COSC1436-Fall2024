#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Movie: Title, Actor(s), Run Length, Description, Genres, Director(s), Release Year, MPAA Rating
struct Movie
{
    //Required
    string Title;
    
    // At least 0, minutes
    int RunLength;

    //Optional
    string Description;

    // >= 1900
    int ReleaseYear;

    bool IsClassic;

};


int main()
{
    ////Relational Demo
    //// rel_op ::= < <= > => == !=
    //// rel_expr ::= E rel_op E (boolean)

    ////int left, right;
    //string left, right;
    //cout << "Enter a left and right value: ";
    //cin >> left >> right;

    ////Mangle the Values
    //// Do NOT use == equality floating point values to avoid rounding errors
    //// Except when comparing floating point value to intregal (e.g. f == 45)
    //
    ////left = (left * 21) / 21;
    ////right = (right * 15) / 15;

    ////bool areEqual = left = right == 20 //e.g. assigns a 1 value to the left value 
    ////bool areEqual = left = 20 = right //set up booleans with left to right operation in mind
    ////bool areEqual = left = right; //e.g. assignment instead of equality
    ////cout << left << " == " << right << " = " << (left = right) << endl; //e.g. assignment instead of equality

    ////String comparison for case insensitive
    //// _strcmpi(string, string) => int
    ////   when using C++ strings specify value as 'expr' .c_str()
    ////   returns < 0 if left < right
    ////           = 0 if left == right
    ////           > 0 if left > right

    //cout << left << " ciequal " << right << " = " << _strcmpi(left.c_str(), right.c_str()) << endl;

    //cout << left << " < " << right << " = " << (left < right) << endl;
    //cout << left << " <= " << right << " = " << (left <= right) << endl;
    //cout << left << " > " << right << " = " << (left > right) << endl;
    //cout << left << " >= " << right << " = " << (left >= right) << endl;
    //cout << left << " == " << right << " = " << (left == right) << endl;
    //cout << left << " != " << right << " = " << (left != right) << endl;
    //cout << endl;


    // Movie: Title, Actor(s), Run Length, Description, Genres, Director(s), Release Year, MPAA Rating
    //Decision Making -- IF statement 
    // if-stmt ::=

    /////// Add a new movie
    //Creat a new movie
    Movie movie;// {0};


    //Get required Title
    cout << "Enter a title: ";
    getline(cin, movie.Title);

    if (movie.Title == "")
    {
        cout << "ERROR: Title is required" << endl;
        cout << "Enter a title: ";
        getline(cin, movie.Title);

        cout << "Enter a title: ";
        getline(cin, movie.Title);
    };
        ///// Display movie details
    cout << "---------------" << endl;
    cout << movie.Title << endl;

}




//relational_op :: < , > , <= , >= , == , !=
// 1 = True | 0 = False
// Main operations used are :: <= , >= , == , != (Rare occasions)
// _strcmpi(str, str) :: used for string comparison insensitive (still has errors with code)
// 