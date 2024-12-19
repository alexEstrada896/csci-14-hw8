/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
int main()
{
    ifstream inputFile;//file stream 
    
//variables to carry highest name, highest average, and input of names and 3 scores
    string highestName , name;
    double highestAvg = 0 , test1 , test2 , test3   ;
    
    inputFile.open("grades.txt");//opens files with name and 3 scores
    
    while(inputFile >> name >> test1 >> test2 >> test3) // reads names and 3 scores
    {
        double avg; //finds the avg for all the names
    avg = (test1 + test2 + test3) / 3 ;
    
    if (avg > highestAvg) // finds highest avg and name
    {
       highestAvg = avg;
       highestName = name;
    }
    
        
    }
    
    ofstream outputfile;
    outputfile.open("highestScore.txt");//creates file for highest textscore
    
    outputfile << highestName <<fixed<<setprecision(2)<<" "<<highestAvg;
    
    
    
    
    
    
inputFile.close();
    return 0;
}