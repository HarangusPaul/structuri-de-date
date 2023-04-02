//
// Created by paulh on 4/2/2023.
//

#include <numeric>
#include "backtraking.h"
#include "../repo/Collection.h"
#include "../repo/Iterator.h"
#include <iostream>

int make_sum(std::vector<std::pair<int,int>> v)
{
    int s = 0;
    for(auto i:v)
        s+=i.first*i.second;
    return s;
}

bool valid(std::vector<std::pair<int,int>> v,int sum,int new_el)
{
    int s = 0;
    for(auto i:v)
        s+=i.first*i.second;
    return s <= sum;
}


bool solution(std::vector<std::pair<int,int>> v,int sum,int new_el)
{
    int s = 0;
    for(auto i:v)
        s+=i.first*i.second;
    return s == sum;
}

void back(std::vector<std::pair<int,int>> &elem,int sum,Collection &colection_of_cash,std::vector<Tranzactions> &final)
{
    Iterator col(colection_of_cash);
    while(col.valid()){
        int cash = col.current();
        int oc = col.getCurrentOccurrences();
        while(oc > 0)
        {
            if (valid(elem, sum, col.current())) {
                if (solution(elem, sum, col.current())) {
                    final.emplace_back(0, make_sum(elem) + col.current(), elem);
                }
                elem.emplace_back(col.current(),oc);
            }
            col.next();
            back(elem,sum+cash,colection_of_cash,final);
        }
    }
}

std::vector<Tranzactions> aplly_back(int sum_to_be_paid,Collection &colection_of_cash)
{
    std::vector<int> vec;

}
