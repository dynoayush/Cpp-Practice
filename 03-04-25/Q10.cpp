#include <iostream>
using namespace std;
enum Day {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(){
    Day today;
    today = WEDNESDAY;
    cout<< "Today is day number: " <<today<<endl;
    switch (today)
    {
    case SUNDAY:
        cout<<"It is a weekend!" <<endl;
        break;
    case MONDAY:
        cout<<"Start of the workweek!" <<endl;
        break;
    case WEDNESDAY:
        cout<<"Midweek Day!" <<endl;
        break;
    case FRIDAY:
        cout<<"Weekend is coming!" <<endl;
        break;
    default:
        cout<<"A regular weekday!" <<endl;
    }
    return 0;
}
