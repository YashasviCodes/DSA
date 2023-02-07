// TLE at leetcode 


/* ✔️⚠️[TLE] Approach - 1 (recursive backtracking)

    Time : O(n^n) where n is length of the array 'coins', this is because we have n choices, as we can pick any 1 coint from the n coints at each level
    Space : O(n^n) 

    🔍note : i used datatype of currentAmount as double so that the sum doesnt get out of bounds

*/

/*  // Code
private:
    void solve(vector<int> &arr, int &amount, int &ansCount, double currentAmount, int currentCoinCount){

        // base case - if the current amount == amount then save this currentCoinsCount in ans if it is smaller then ans 
        if(currentAmount == amount){
            ansCount = min(ansCount, currentCoinCount);
            return;
        }

        // run a loop to traverse while array ans(or coins)
        for(int i = 0; i < arr.size(); i++){

            // fetch the ith coin 
            int coin = arr[i];

            // if the after adding the coin to the currentAmount it become greater then the amount, then break from loop
            if(currentAmount + coin > amount) break;

            // else add the current coin to currentAmount and call recursively for rest part
            else{
                currentAmount += coin;
                solve(arr, amount, ansCount, currentAmount, currentCoinCount + 1);
                //while returning, remove the coin added 
                currentAmount -= coin; 
            }
        }
    }
public:
    int coinChange(vector<int>& coins, int amount) {

        // create a 'currentCoinCount', 'ansCount', 'currentAmount'
        int currentCoinCount = 0, ansCount = INT_MAX;
        double currentAmount = 0;

        solve(coins, amount, ansCount,currentAmount,currentCoinCount);

        // if we got a coinCount then return it else return -1
        if(ansCount != INT_MAX) return ansCount;
        else return -1;
        
    }


*/