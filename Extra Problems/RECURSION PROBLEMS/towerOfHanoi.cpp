#include<iostream>
using namespace std;

/* (✔️) Towers Of Hanoi Problem 
   imp problem.

   disc are numbers from 1 to n (where 1 is smallest and n is largest)
   Print moves to solve the problem 
*/

void TOH(int N, string source, string helper, string  destination, int &movesCount){
    
    // base case 
    if(N == 0)
        return ;

    //recursive calls
    TOH(N - 1, source, destination ,helper, movesCount);

    movesCount++;
    cout << "Move dics " << N << " from rod " << source << " to rod " << destination << endl;

    TOH(N - 1, helper, source ,destination, movesCount);


}
int main(){


    int numberOfDiscs;
    cout << "Enter number of Discs : ";
    cin >> numberOfDiscs;

    int movesCount;


    TOH(numberOfDiscs, "A", "B", "C", movesCount);


}


/*Solved on GFG - https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1*/