#pragma once
#include <string>
#include <iostream>
class Figure {
protected:

    std::string fig_name;
    int sides_count = 0;
    
public:

    //virtual bool check(); 
    
    virtual void PrintInfo();

};
