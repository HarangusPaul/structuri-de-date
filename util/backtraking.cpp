//
// Created by paulh on 4/2/2023.
//

#include "backtraking.h"


std::vector<std::pair<int,int>> x;
std::vector<Tranzactions> sol;

int Solutie(int k,int sum){
    int s = 0;
    for(int i=0;i<k;i++)
    {
        s+=(x[i].first*x[i].second);
    }
    return s == sum;
}

int OK(int k,int sum){
    for(int i=0;i<k-1;i++)
    {
        if(x[i].first == x[k-1].first)
            return 0;
    }
    int s = 0;
    for(int i=0;i<k;i++)
    {
        s+=(x[i].first*x[i].second);
    }
    return s<=sum;
}

void Afisare(int k)
{
    std::vector<std::pair<int,int> > x1;
    for(int i=0;i<k;i++)
        x1.push_back(x[i]);
    for(int i=0;i<x1.size()-1;i++)
        for(int j=0;j<x1.size();j++)
            if(x1[i].first > x1[j].first)
            {
                std::pair<int,int> aux;
                aux = x1[i];
                x1[i] = x1[j];
                x1[j] = aux;
            }
    Tranzactions t;
    t.setTypes(x1);
    if(!sol.empty())
    {
        bool ok = true;
        for(auto & i : sol)
            if(i.is_equal(t))
                ok = false;
        if(ok)
            sol.push_back(t);
        return;
    }
    sol.push_back(t);
}

void Back(int k,int sum,Iterator col){
    while(col.valid()){
        int count = col.current();
        while(count > 0)
        {
            if(k < x.size())
                x[k]= std::make_pair(col.current(),count);
            else
            {
                x.push_back(std::make_pair(col.current(),count));
            }
            if( OK(k,sum) )
            {
                if(Solutie(k,sum))
                {
                    Afisare(k);
                    break;
                }
                else
                {
                    Back(k+1,sum,col);
                }

            }
            count--;
        }
        col.next();
    }
}


std::vector<Tranzactions> aplly_back(int sum_to_be_paid,Collection &colection_of_cash)
{
    Iterator cole(colection_of_cash);
    Back(0,sum_to_be_paid,cole);
    return sol;
}
