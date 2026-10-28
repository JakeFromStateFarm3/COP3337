#include <iostream>
#include <string>

class Attendance {

private:
    std::string attendance;
    
    bool isAbsent(std::string attendance){
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
    bool isLate(std::string attendance){
        for (int i = 2; i < attendance.length(); i++){
            if (attendance[i] == 'L' and attendance[i - 1] == 'L' and attendance[i - 2] == 'L'){
                return true;
            }
        }
        return false;
    }
};