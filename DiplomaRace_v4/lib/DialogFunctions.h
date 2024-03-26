#pragma once
#include<iostream>
#include "EnumList.h"

int RegistrationPreface(int number_of_call); // asking about registration, returns action

std::string enum_to_name(int num); // auxilliary function returns name_of_TS from enum list

std::string enum_to_RaceName(int num); // auxilliary function returns name_of_race from enum list

void list(); // auxilliary function prints list of TS

int Registration();  // TS registration function returns number of TS

bool one_more_racing(); // asking if user wants one more race

int racing_type();  // registration of the race type, returns number of race

