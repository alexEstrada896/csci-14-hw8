/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    
   double amount; 
  
//asks user to enter todays sales for five stores
 cout <<"SALES BAR CHART"<<endl;
 cout<<"(Each * = $100)"<<endl; 
 
 
for ( int stores = 1; stores <= 5 ; stores++)//enters amount for five stores
{
    cout <<"Enter today’s sales for store "<<stores<<": "<<endl;
    cin >>amount;
    
    
//creates bar graph with a row of astrics
    int numAstrics;
    numAstrics = amount / 100;
    cout <<" Store: "<<stores;
    
    for (int i = 0 ; i < numAstrics ; i++)
    {
        cout<<" *";
    }
    cout << endl;
} 
    
    



 
    
    




    return 0;
}