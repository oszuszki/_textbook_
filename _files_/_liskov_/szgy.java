class szulo
{
protected int m_kor;
protected String m_nev;
public void setKor(int kor) {
m_kor = kor;
}
public void setNev(String nev) {
m_nev = nev;
}
public int getAge(){
return m_kor;
}
}
class gyerek extends szulo
{
public String getNev() {
return m_nev;
}
}
class szuloGyerek
{
public static void main (String args[])
{
szulo s = new gyerek();
s.setNev("Anya");
s.setKor(60);
gyerek gy = new gyerek();
s.setNev("Maria");
s.setKor(15);
System.out.println(gy.getNev() + " " + s.getNev());
}
}
