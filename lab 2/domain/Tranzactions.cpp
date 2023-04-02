//
// Created by paulh on 4/2/2023.
//

#include "Tranzactions.h"

Tranzactions::Tranzactions(int id, int sum, const std::vector<std::pair<int,int>> &types) : id(id), sum(sum), types(types) {}

Tranzactions::Tranzactions() {}

int Tranzactions::getId() const {
    return id;
}

void Tranzactions::setId(int id) {
    Tranzactions::id = id;
}

int Tranzactions::getSum() const {
    return sum;
}

void Tranzactions::setSum(int sum) {
    Tranzactions::sum = sum;
}

const std::vector<std::pair<int,int>> &Tranzactions::getTypes() const {
    return types;
}

void Tranzactions::setTypes(const std::vector<std::pair<int,int>> &types) {
    Tranzactions::types = types;
}

//std::ostream &operator<<(std::ostream &os, const Tranzactions &tranzactions) {
//    os << "id: " << tranzactions.id << " sum: " << tranzactions.sum << " types: ";
//    std::vector<char*> v = tranzactions.types;
//    for(auto i:v)
//        os << i<<" and ";
//    return os;
//}
