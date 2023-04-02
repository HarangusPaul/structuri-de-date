//
// Created by paulh on 4/2/2023.
//

#ifndef LAB_2_TRANZACTIONS_H
#define LAB_2_TRANZACTIONS_H

#include <ostream>
#include "vector"

class Tranzactions {
public:
    Tranzactions(int id, int sum, const std::vector<std::pair<int,int>> &types);

    Tranzactions();

    int getId() const;

    void setId(int id);

    int getSum() const;

    void setSum(int sum);

    const std::vector<std::pair<int,int>> &getTypes() const;

    void setTypes(const std::vector<std::pair<int,int>> &types);

    friend std::ostream &operator<<(std::ostream &os, const Tranzactions &tranzactions);

private:
    int id = 0;
    int sum;
    std::vector<std::pair<int,int>> types;
};


#endif //LAB_2_TRANZACTIONS_H
