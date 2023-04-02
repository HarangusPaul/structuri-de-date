//
// Created by paulh on 4/2/2023.
//

#ifndef LAB_2_ATM_H
#define LAB_2_ATM_H


#include "../repo/Multime.h"

class ATM {
public:
    ATM();

    const Multime &getAtmCash() const;

    void setAtmCash(const Multime &atmCash);

private:
    Multime atm_cash;
};


#endif //LAB_2_ATM_H
