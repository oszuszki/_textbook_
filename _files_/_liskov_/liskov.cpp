#include <iostream>

class Madar
{
    
public:
   
    virtual void  repul()
    {
        std::cout << "Repül!\n" ;
    }
};

class Sass : public Madar
{
};

class Pingvin : public Madar
{
};

static void repulMadar(Madar& m)
{
    m.repul();
}

int main()
{
    Sass sass;
    Pingvin pingvin;
    
    repulMadar(sass);
    repulMadar(pingvin);
    
    return 0;
}

