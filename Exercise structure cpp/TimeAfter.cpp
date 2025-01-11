#include <iostream>

using namespace std;
int main()
{
    int hour,minute,minutenap ;
    cin >> hour;
    cin >> minute ;
    cin >> minutenap;
    minute += minutenap;
    minute += hour*60;
    int hourshow ,minuteshow ;
    hourshow = minute / 60;
    minuteshow = minute % 60;
    //condition cut 24 and add 0
    if (hourshow >= 24){
        hourshow -= 24;
    }

    if (hourshow < 10 && minuteshow < 10){
        cout << "0" << hourshow << " " << "0" << minuteshow <<endl;
    }
    else if (hourshow < 10 && minuteshow > 10){
        cout << "0" << hourshow << " "  << minuteshow <<endl;
    }
    else if (hourshow > 10 && minuteshow < 10){
        cout  << hourshow << " "  <<"0"<< minuteshow <<endl;
    }
    else {
        cout << hourshow << " "  << minuteshow <<endl;
    }
    return 0;
}