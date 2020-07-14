/*Given two numbers, hour and minutes. Return the smaller angle (in degrees) formed between the hour and the minute hand.*/

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a1=0;
        a1=abs(hour%12*30+minutes*0.5-minutes*6);
        if(a1>180)
            a1=360-a1;
        return a1;
    }
};
