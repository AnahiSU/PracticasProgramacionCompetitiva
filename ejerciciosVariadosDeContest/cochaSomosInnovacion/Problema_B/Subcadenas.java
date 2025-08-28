import java.util.*;
public class Subcadenas
{
String A;
String B;

public Subcadenas()
{
Scanner entrada=new Scanner(System.in);
A=entrada.nextLine();
B=entrada.nextLine();
}
public boolean comparador()
{
boolean resp;
int posB=0, encontradas=0;
//"econtradas" es un contador, para saber cantidad de letras encontradas
for(int i=0; i<A.length() && posB<B.length() ; i++)
{
if(B.charAt(posB)==A.charAt(i))
{
encontradas++;
posB++;
}
}

//Aquí se determina si encontró todas las letras que debía
//porque se compara con la cantidad de letras que tiene B
if(encontradas == B.length())
resp=true;
else
resp=false;
return resp;
}

public static void main(String args[])
{
System.out.println("Ingrese sus cadenas A y B:");
Subcadenas s1 = new Subcadenas();
System.out.println("¿La cadena B es una subcadena de la cadena A?");
if(s1.comparador())
System.out.println("Si");
else
System.out.println("No");
}
}