#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;  // Create input file stream object to read from file
    
    fin.open("zoom.txt");  // Open the file "zoom.txt" for reading
    
    char c;  // Variable to store each character read from file
    fin >> c;  // Read the first character from file
    
    // Loop through file until end-of-file (EOF) is reached
    while(!fin.eof()){
        cout << c;  // Print current character to console
        fin >> c;   // Read next character from file
    }
    
    fin.close();  // Close the file to free system resources
return 0;
}