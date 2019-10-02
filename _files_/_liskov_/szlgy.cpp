#include<iostream>
class Teglalap
{
public:
int m_szelesseg;
int m_magassag;
Teglalap(int szelesseg, int magassag) {
m_szelesseg = szelesseg;
m_magassag = magassag;
}
int getszelesseg(){
return m_szelesseg;
}
int getmagassag(){
return m_magassag;
}
};
class Negyzet : public Teglalap
{
public:
Negyzet(int oldal): Teglalap(oldal, oldal)
{
m_szelesseg = oldal;
m_magassag = oldal;
}
int getTerulet(){
return m_szelesseg * m_magassag;
}
};
int main ()
{
Teglalap* r = new Negyzet(10);
Negyzet* s = new Negyzet(10);
std::cout << s->getTerulet() << r->getTerulet() << std::endl;;
}
