//
// Created by paulh on 4/2/2023.
//

#include "Repository.h"

Repository::Repository() {}

const std::vector<Tranzactions> &Repository::getStorage() const {
    return storage;
}

void Repository::setStorage(const std::vector<Tranzactions> &storage) {
    Repository::storage = storage;
}

void Repository::add(Tranzactions transaction) {
    storage.push_back(transaction);
}
