
#include <iostream>
using namespace std;

/*   (✔️) REMOVE ALL ADJACENT DULPICATES FROM STRING 
     
    --> this is 2nd recursive Approach 

*/

string remvAdjDplctesRecursive(string s){

        int length = s.length();
        
        string ans = "";
        for(int i=0; i<length; i++){
            
            //for middle indexes
            if(s[i] == s[i+1] || s[i] == s[i-1]) continue;
            
            else ans.push_back(s[i]);
            
        }
        
        if(ans != s) return remvAdjDplctesRecursive(ans);
        
        return ans;
         
}

int main(){

    cout << "- - - - - - - - - - - - - - - - -" << endl;


    string s = "geeksforgeek";  //TC1 ☑️
    // string s = "Yassviiz";  //TC2 ☑️
    // string s = "adbccbda";  // TC3 - Output will be empty 

    
    string resultingString = remvAdjDplctesRecursive(s);
    
    cout << "Input String : " << s <<endl;
    cout << "Output String : " << resultingString << endl;

    cout << "- - - - - - - - - - - - - - - - -" << endl;

}
    


/*
 both recursive approaches

 approach - 1 gfg :- ❌(208/300 cases ) :-https://practice.geeksforgeeks.org/viewSol.php?subId=361918b1b3ee6726c7252c95f7a226f9&pid=705889&user=yashasvcb6y
 approach - 2 gfg :- ✔️ : https://practice.geeksforgeeks.org/viewSol.php?subId=9b140c11a50a9388cb0f0900a1076f74&pid=705889&user=yashasvcb6y
 */