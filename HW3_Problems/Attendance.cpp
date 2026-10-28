#include <iostream>
#include <string>

class Attendance {

private:
    std::string attendance;
    
    bool isAbsent(){
        int x = 0;
        for (int i = 0; i < attendance.length(); i++){
            if (attendance[i] == 'A'){
                x += 1;
            }
            if (x == 2){
                return true;
            }
        }
        return false;
    }
    bool isLate(){
        for (int i = 2; i < attendance.length(); i++){
            if (attendance[i] == 'L' && attendance[i - 1] == 'L' && attendance[i - 2] == 'L'){
                return true;
            }
        }
        return false;
    }
    bool checkAttendance(){
        return ((!isAbsent(attendance)) && (!isLate(attendance)))
    }

public:
    Attendance(std::string inputRecord){
        attendance = inputRecord;
    }
};