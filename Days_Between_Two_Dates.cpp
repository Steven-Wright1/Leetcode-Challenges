#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;




int DaysBetween(int year1, int month1, int day1, int year2, int month2, int day2) {
    unordered_map<int, int> days_in_month = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10, 31},{11,30},{12,31}};

    int Number_of_Leap_Years = 0; 
    vector<int> LeapYears;
    
    // Check for leap years within the date range. Store leap years in a vector. 
    for(int i = 0; i <= year2 - year1; i++){
        if( ((year1 + i) % 4 == 0 && (year1 + i) % 100 != 0) || (year1 + i) % 400 == 0){
            LeapYears.push_back((year1 + i));
            Number_of_Leap_Years++;
        }
    }

    // If year 1, and or year 2, are in the leap year vector, the months and days are checked to test if February 29th is excluded.
	if (find(LeapYears.begin(), LeapYears.end(), year1) != LeapYears.end() && month1 > 2)
		Number_of_Leap_Years -=1;
    if (find(LeapYears.begin(), LeapYears.end(), year2) != LeapYears.end() && month2 < 2 || find(LeapYears.begin(), LeapYears.end(), year2) != LeapYears.end() && month2 == 2 && day2 < 29)
		Number_of_Leap_Years -= 1; 

    
    int date_difference_in_months = (year2 - year1)*12 + month2 - month1; 
    
     
    int number_of_days = 0; 
    int j = 0;
    for(int i = 0; i < date_difference_in_months; i++){
    
        
        number_of_days += days_in_month[month1 + j];
        cout << month1 + j << '\t';
        j++;
        

        if((month1 + j) % 13 == 0){
            j = 1;
            month1 = 0; 
        }
    }

    number_of_days += (day2 - day1) + Number_of_Leap_Years;
   

    
    
    return(number_of_days);
}




int main()
{
    int year1, month1, day1, year2, month2, day2;
    cout << "Enter Year 1:"; 
    cin >> year1; 
    cout << "Enter Month1:"; 
    cin >> month1; 
    cout << "Enter Day 1:"; 
    cin >> day1; 
    cout << "Enter Year 2:"; 
    cin >> year2;
    cout << "Enter Month 2:"; 
    cin >> month2;
    cout << "Enter Day 2:"; 
    cin >> day2;

    DaysBetween(year1, month1, day1, year2, month2, day2);





    system("PAUSE");

    return (0); 
}