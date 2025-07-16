// lab2.celinetandera.cpp 
//

#include <iostream>
using namespace std;

int main()
{
    float hamburger_price = 3.75;
    float frenchfries_price = 2.55;
    float softdrink_price = 1.99;
    int hamburgers = 4;
    int frenchfries = 3;
    int softdrinks = 5;
    float total_price = hamburger_price * hamburgers + frenchfries_price * frenchfries + softdrink_price * softdrinks;
    const float TAX_RATE = 0.095;
    float Tax_Amount = TAX_RATE * total_price;
    float final_price = Tax_Amount + total_price;

    cout << "The items you ordered are " << hamburgers << " Hamburgers,"
        << frenchfries << " frenchfries, and " << softdrinks << " softdrinks.";
    cout << "\nSubtotal:\t $" << total_price;
    cout << "\nTaxes:\t\t $" << Tax_Amount;
    cout << "\nTotal price:\t $" << final_price;
    cout << "\n\nEnjoy!" << endl << endl;

    return 0;

}

