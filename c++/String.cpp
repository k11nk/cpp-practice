#include<iostream>
#include<string>

using namespace std;

int main()
{
    //Initializing the string
    string s1 = "I am learning about strings";

    //Displaying the string
    cout << s1 <<endl;

    //Resizing the string
    s1.resize(11);
    cout << "The string after resizing is : " << s1 << endl;

    //Display the capacity
    cout << "Capacity of string is : " << s1.capacity() << endl;

    //Display the length
    cout << "Length of the string is : " << s1.length() << endl;

    //Shrinking to fit it 
    s1.shrink_to_fit();
    cout << "Capacity after shrinking is : " << s1.capacity() << endl;
    cout << s1 <<endl;

    return 0;  
}