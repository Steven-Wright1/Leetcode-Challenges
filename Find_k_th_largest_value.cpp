#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <unordered_set>



template<class T>
void write_vector(const std::vector<T>& vector) {
    std::cout << "Numbers you entered: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<T>(std::cout, " "));
    std::cout << '\n'; 
}

std::vector<int> remove_duplicates(std::vector<int>& numbers) {
    // Removes duplicated entries
    std::unordered_set<int> s(numbers.begin(), numbers.end());
	numbers.assign(s.begin(), s.end());
	for (auto it = numbers.cbegin(); it != numbers.cend(); ++it)

    // Sort vector with duplicates removed, and print
    sort(numbers.begin(), numbers.end());                       
    std::cout << "The vector with duplicates removed is ";
    for(int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << '\t'; 

        return numbers;
}

void findKthLargest(std::vector<int>& numbers){

    int k_th_largestidentifier, k_th_largest,k; 
    std::cout << '\n' << "Enter in the value of 'kth largest value" << '\n'; 
    std::cin >> k;

    k_th_largestidentifier = numbers.size()-k;
    if(k_th_largestidentifier < 0) 
        std::cout << "NULL" << '\n';
        else 
            std::cout << "The k_th_largest value is "<<  numbers[k_th_largestidentifier] << '\n';
}




int main() {


    // Declare sufficient variables for string to be converted into vector
    std::string line; 
    int number; 
    std::vector<int> numbers; 

    // Request user input of vectors
    std::cout << "Enter numbers seperated by spaces" << '\n';

    // Push string entries into vector
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while(stream >> number)
        numbers.push_back(number);


    // Call function to iterate through and print vector
    write_vector(numbers);
    
    // Call function to remove duplicated entries
    remove_duplicates(numbers); 

    // Call function to find k_th largest numbers
    findKthLargest(numbers);

    system("pause");
    return 0; 
}