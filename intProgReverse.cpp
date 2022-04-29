#include <iostream>

using namespace std;

int main()
{
    int number, lastDigit, reverse = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    do
    {
        //the modulu or remainder of any number
        //divided 10 is the last digit
        lastDigit = number % 10;

        //increase the reversed digit by multiple 10 then add the last digit

        reverse = (reverse * 10) + lastDigit;

        //Get the remaining digit
        number= number / 10;

    } while (number > 0); //keep the loop until the number reaches 0
    
    cout << "That number reversed is " << reverse;

    return 0;
}