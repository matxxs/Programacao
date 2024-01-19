namespace Exercicio1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Dados da primeira pessoa:");
            User User1 = GetUsers.GetUser();

            Console.WriteLine("Dados da segunda pessoa:");
            User User2 = GetUsers.GetUser();

            if (User1.Age > User2.Age)
            {
                Console.WriteLine(User1.Name + " é mais velho do que " + User2.Name + ".");
            }
            else if (User2.Age > User1.Age)
            {
                Console.WriteLine(User2.Name + " é mais velho do que " + User1.Name + ".");
            }
            else
            {
                Console.WriteLine(User1.Name + " e " + User2.Name + " têm a mesma idade.");
            }
        }

    }
}