#include <iostream>
#include <string>

void capitaliser(std::string& sentence){

    // Capitalise the first charcater in the string
    //for(int i = 0; i < sentence.length(); i++)
    //    sentence[0] = toupper(sentence[0]); 

    // Capitalise the first character of each word within the string
    for(int i = 0; i < sentence.length(); i++) {
        sentence[0] = toupper(sentence[0]); 
        if(sentence[i] == ' ')                          // if there's a space, capitalise the first character of the word following the space
            sentence[i+1] = toupper(sentence[i+1]);
    }
}

int main(){

    // Assign Memory
    std::string sentence;
    
    // Ask user for sentence, and store the string in 'sentence'
    std::cout << "Enter a sentence" << '\n';
    getline(std::cin, sentence);
 
    // Call the capitalisation function
    capitaliser(sentence);

    // Print the result
    std::cout << sentence << '\n';

    system("pause");
    return 0;
}