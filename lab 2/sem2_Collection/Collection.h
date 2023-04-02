//
// Created by camel on 3/14/2023.
//

#ifndef SEM2_COLLECTION_COLLECTION_H
#define SEM2_COLLECTION_COLLECTION_H


typedef int TElem;

class Collection {
private:
    TElem* elements;
    int* occurrences;
    int distinctelements;
    int capacity;
public:
    Collection();
    void add(TElem elem);
    bool remove(TElem elem);
    bool search(TElem elem);
    int size();
    int nroccurrences(TElem elem);
    void destroy();
    /**
     * this will be removed
     */
    int getAt(int position);
};


#endif //SEM2_COLLECTION_COLLECTION_H
