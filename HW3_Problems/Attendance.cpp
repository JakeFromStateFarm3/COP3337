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
};