sealed class Human permits Manish, Vartika, Anjali
{   
   public void printName()
   {
       System.out.println("Default");
   }
}
non-sealed class Manish extends Human
{
   public void printName()
   {
       System.out.println("Manish Sharma");
   }
}
sealed class Vartika extends Human
{
   public void printName()
   {
       System.out.println("Vartika Dadheech");
   }
}
final class Anjali extends Human
{
   public void printName()
   {
       System.out.println("Anjali Sharma");
   }
}