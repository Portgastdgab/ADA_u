//Orientada a objetos
#include <iostream>
#include <cstdlib>  

class CVector {
private:
    int* m_pVect;    
    int m_nCount;    
    int m_nMax;      
    int m_nDelta;    

    void Init(int delta) 
    {
        m_nCount = 0;
        m_nMax = delta;
        m_nDelta = delta;
        m_pVect = (int*)malloc(sizeof(int) * m_nMax);
    }

    void Resize() 
    {
        m_pVect = (int*)realloc(m_pVect, sizeof(int) * (m_nMax + m_nDelta));
        m_nMax += m_nDelta;
    }

public:
    CVector(int delta = 10) 
    {
        Init(delta);
    }

    ~CVector() 
    {
        free(m_pVect);
    }

    void Insert(int elem) 
    {
        if (m_nCount == m_nMax)
            Resize();
        m_pVect[m_nCount++] = elem;
    }

    void Print() const 
    {
        for (int i = 0; i < m_nCount; ++i)
        }
        std::cout << std::endl;
    }
};

int main() 
{
    CVector myVector;
    for (int i = 0; i < 15; ++i)
        myVector.Insert(i);
    myVector.Print();
    return 0;
}