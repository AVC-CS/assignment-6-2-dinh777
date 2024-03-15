//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        /***************************************************
         * Code your program here
         ***************************************************/

        int randomNum;
        // #include <cstdlib> to be able to use srand and rand func
        // #include <ctime> to be able to use time func

        // srand(time(0)) ; //srand is used to generate a new seed and 
                //therefore a new random number each run
            // we use time(0) func to give a new number to srand each time
            // since time changes every second 

            // (you can use any method inside srand as long as new number 
            // is generated each time, you could even ask user to input a 
            // new number each run and place that var into srand)

            randomNum = rand() % 100; 
            // mod 100 is used to generate numbers from 0 to 99. basically, 
            // mod 7 will generate numbers from 0 to 6, so, in general, 
            // mod N will generate numbers from 0 to (N-1) 
            return(randomNum);

}






int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         * 
         * Write a func that returns the number that is closest to the 
         * mean value( num1 + num2 + num3 ) /3
         * 
         * 
         * if you eant -
Example 
result = getClosestMed(1, 2, 3);
// result should be 2
// return 2 for the values 1, 2 and 3

         ***************************************************/

         int mean ; 

    mean = (rdnum1 + rdnum2 + rdnum3) / 3 ; //finding mean value

    float diff1 ; 
    float diff2 ; 
    float diff3 ; 

    float result ; 

    diff1 = abs(mean - rdnum1) ; 
    diff2 = abs(mean - rdnum2) ; 
    diff3 = abs(mean - rdnum3) ; 

    // now check to see which diff is least, aka number closest to mean

//     result = (diff1 < diff2) ? rdnum1 : rdnum2 ; 
//     result = (result < diff3) ? result : diff3 ;

//another way to rewrite above to also track finalDiff var rather than only result var
// you could probs add to the above 
//      finalDiff = (diff1 < diff2) ? diff1 : diff2) after line 53
//      finalDiff = (finalDiff < diff3) ? dinalDiff : diff3)) after line 54
// instead of using if else below 

float finalDiff ; 


// this entire block below is to find out which number is closest to mean based off of smallest differences 
    if (diff1 < diff2){
        finalDiff = diff1 ;
        result = rdnum1 ;
    }
        else {
        finalDiff = diff2 ;
        result = rdnum2 ; 
        }

    if ( finalDiff < diff3){

    }
        else {
        finalDiff = diff3;
        result = rdnum3 ; 
        }
    
    return(result);


}