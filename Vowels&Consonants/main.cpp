//
//  main.cpp
//  Vowels&Consonants
// Determine how many of the characters are vowels and how many are consonants in a given line of text.
//  Created by Mariama Jaiteh on 10/19/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char tmp;
    int vowelCounter = 0;
    int consonantCounter = 0;
    string word = "";
    cout << "Word: ";
    getline(cin,word);
    

    
    for (int i = 0; i < word.size(); i++)
    {
        tmp = toupper(word[i]);
        switch(tmp)
        {
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                vowelCounter++;
                break;
            case ' ':
                continue;
            default:
                consonantCounter++;
        }
    }	
    cout << "Total vowels = " << vowelCounter << endl;
    cout << "Total consonants = " << consonantCounter << endl;		
    
    return 0;
    
}
