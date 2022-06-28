#include <iostream>

using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void){counter = 0;};
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the Id of item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of item "<< counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The Price of Item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop kalparyuvedic;
    kalparyuvedic.initCounter();
    kalparyuvedic.setPrice();
    kalparyuvedic.setPrice();
    kalparyuvedic.setPrice();
    kalparyuvedic.setPrice();
    kalparyuvedic.displayPrice();

    return 0;
}