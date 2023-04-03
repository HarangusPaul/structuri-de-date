//
// Created by paulh on 4/2/2023.
//

#ifndef LAB_2_ATM_H
#define LAB_2_ATM_H


//#include "../repo/Multime.h"

#include "../repo/Collection.h"
#include "../repo/Repository.h"
#include "../util/backtraking.h"

class ATM {
public:
    ATM();

    std::vector<Tranzactions> return_all();

    virtual ~ATM();

    void control_cash(int sum);
private:
    Collection col;
    Repository storage;
};


#endif //LAB_2_ATM_H
