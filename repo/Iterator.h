//
// Created by camel on 3/14/2023.
//

#ifndef SEM2_COLLECTION_ITERATOR_H
#define SEM2_COLLECTION_ITERATOR_H


#include "Collection.h"

class Iterator {
private:
    Collection collection;
    int position;
public:
    Iterator(Collection c);
    bool valid();
    void first();
    void next();
    int current();
    void remove(int elm,int ocur);
    int getCurrentOccurrences();
};

#endif //SEM2_COLLECTION_ITERATOR_H
