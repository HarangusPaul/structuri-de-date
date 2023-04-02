//
// Created by paulh on 4/2/2023.
//

#include "ATM.h"

ATM::ATM() {}

const Multime &ATM::getAtmCash() const {
    return atm_cash;
}

void ATM::setAtmCash(const Multime &atmCash) {
    atm_cash = atmCash;
}
