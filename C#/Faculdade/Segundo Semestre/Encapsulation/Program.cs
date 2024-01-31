namespace Encapsulation
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Product product = new Product("TV", 500.00, 19);


            product.SetName("TV 4K");
            Console.WriteLine(product.GetName());

            Console.WriteLine(product.GetPrice());

            Console.WriteLine(product.GetAmount());


        }
    }
}