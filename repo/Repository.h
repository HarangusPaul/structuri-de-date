//
// Created by paulh on 4/2/2023.
//

#ifndef LAB_2_REPOSITORY_H
#define LAB_2_REPOSITORY_H
#include "vector"
#include "../domain/Tranzactions.h"

class Repository {
public:
    Repository();

    const std::vector<Tranzactions> &getStorage() const;

    std::vector<std::pair<int,int> > return_all();

    void setStorage(const std::vector<Tranzactions> &storage);

    void add(Tranzactions transaction);

private:
    std::vector<Tranzactions> storage;
};


#endif //LAB_2_REPOSITORY_H
