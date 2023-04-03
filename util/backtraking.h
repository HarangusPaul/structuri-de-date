//
// Created by paulh on 4/2/2023.
//

#ifndef LAB_2_BACKTRAKING_H
#define LAB_2_BACKTRAKING_H

#include "vector"
#include "../domain/Tranzactions.h"
#include "../repo/Collection.h"
#include "../repo/Iterator.h"
#include <iostream>

std::vector<Tranzactions> aplly_back(int sum_to_be_paid,Collection &colection_of_cash);

#endif //LAB_2_BACKTRAKING_H
