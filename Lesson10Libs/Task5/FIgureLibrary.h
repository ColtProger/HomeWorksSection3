#pragma once
#include <iostream>

#ifdef FIGURELIBRARYDIN_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureLibrary
{
    class Figure {
    protected:

        std::string fig_name;

    public:

        FIGURELIB_API  virtual void PrintInfo();

    };
}