/* Author:      Nathan Smith (NathanSmith11@my.unt.edu) 
   Date: 03/02/2022
   Instructor: Dr. Pradhumna Shrestha
   Description: This program will generate a random number between a range and the number selected will determine the height of the shape
  	and each line will equal to the corresponding digit itself 
 */ 
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
  int number = rand() % ((9-5) + 1) + 5;  // Generate a random number between 5 to 9 inclusive
  cout<<"The random number between 5 to 9 is "<<number << endl;
  for(int i = 1; i<= number ; i++)  // Run a for loop for deciding the digit to be printed
  {
    for(int j = 1; j<= i ; j++)  // Run an inner loop to decide how many times that digit has to be printed which is equal to the digit printed
    {
      cout<<i<<" ";  // print the digit with space
    }
    cout<<" \n ";  // print a new line after every digit
  }
  return 0;
  
}
