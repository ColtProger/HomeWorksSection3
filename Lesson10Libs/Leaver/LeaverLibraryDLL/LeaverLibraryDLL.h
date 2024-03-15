#pragma once
#include <iostream>

#ifdef LEAVERLIBRARY_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

class LeaverLibrary {
public:
	LEAVERLIBRARY_API void leave(std::string name);

};
