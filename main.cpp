/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Anh Pham
 */

#include <iostream>
#include <vector>
using namespace std;

class NameValue
{
public:
    int value;
    string name;

    //constructor
    NameValue(int numbers, string characters)
    {
        value = numbers;
        name = characters;
    }
};

int main() {
    cout << "Enter a name followed by a number. \nTo end your list enter NoName then a 0.\n";

    string name;
    int value;

    vector<NameValue> data;

    //This will loop through for all inputs
    while(cin >> name >> value)
    {
        //end loop
        if(name == "NoName" && value == 0)
        {
            break;
        }

        //Use to check any duplicate
        for(int i = 0; i < data.size(); i++)
        {
            if(data[i].name == name)
            {
                cout << "Error: That name has entered twice.\n";
                return 0;
            }
        }


        data.push_back(NameValue(value,name));

    }

    //print list
    cout <<"\nMy list:\n";
    for(int i =0; i < data.size(); i++)
    {
        cout << data[i].name << " " << data[i].value << "\n";
    }
}