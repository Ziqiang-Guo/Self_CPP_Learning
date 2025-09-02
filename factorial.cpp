#include<iostream>
using namespace std;

int factorial(int n) {
    if (n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

string weekdays (int day){
    switch (day){
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid day";
    }

}

int main() {
    int compare_1=3;
    int compare_2=2;
    // cout << "is Compare 1 bigger than Compare 2? " << (compare_1 > compare_2) << endl;
    // cout << "Factorial of 5 is: " << factorial(5) << endl;
    cout << "The 3rd day of the week is: " << weekdays(3) << endl;
    return 0;
}