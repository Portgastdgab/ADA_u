#include <iostream>
#include <cstdlib>

struct Vector {
    int* m_pVect;
    int m_nCount;
    int m_nMax;
    int m_nDelta;
};

void Resize(Vector* pThis) {
    pThis->m_pVect = (int*)realloc(pThis->m_pVect, sizeof(int) * (pThis->m_nMax + pThis->m_nDelta));
    pThis->m_nMax += pThis->m_nDelta;
}

void Insert(Vector* pThis, int elem) {
    if (pThis->m_nCount == pThis->m_nMax) {
        Resize(pThis);
    }
    pThis->m_pVect[pThis->m_nCount++] = elem;
}

int main() {
    Vector myVector;
    myVector.m_nCount = 0;
    myVector.m_nMax = 10;
    myVector.m_nDelta = 5;
    myVector.m_pVect = (int*)malloc(sizeof(int) * myVector.m_nMax);

    Insert(&myVector, 34);
    Insert(&myVector, 54);
    Insert(&myVector, 3243);
    Insert(&myVector, 1213);
    Insert(&myVector, 21);

    for (int i = 0; i < myVector.m_nCount; ++i) {
        std::cout << myVector.m_pVect[i] << " ";
    }
    std::cout << std::endl;

    free(myVector.m_pVect);

    return 0;
}