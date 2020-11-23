#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max_Candies = *max_element(candies.begin(), candies.end());
        vector<bool> solution; 
        
        for(auto& candy: candies)
            solution.push_back(candy + extraCandies >= max_Candies? true:false);   
        
        return(solution);
}


int main() {

    vector<int> candies; 
    string input;
    int numbers;
    int extraCandies; 

    cout << "Enter in the number of candies each child has separated by spaces" << '\n';
    getline(cin, input);
    istringstream stream(input);
    while(stream >> numbers)
        candies.push_back(numbers);

    cout << "Enter in the number of extra candies" << '\n';
    cin >> extraCandies;

    vector<bool> solution = kidsWithCandies(candies, extraCandies);

    for(int i = 0; i < solution.size(); i++)
        cout << solution[i] << ' ';

    system("PAUSE");
    return 0;
}


