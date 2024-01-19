namespace Atividade_07_11_2023
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Inventory inventory = new Inventory();

            while (true)
            {
                Console.WriteLine("Escolha uma opção:");
                Console.WriteLine("1. Adicionar produto");
                Console.WriteLine("2. Remover produto");
                Console.WriteLine("3. Calcular valor total em estoque");
                Console.WriteLine("4. Sair");

                string choice = Console.ReadLine();

                switch (choice)
                {
                    case "1":
                        Console.Write("Nome do produto: ");
                        string name = Console.ReadLine();
                        Console.Write("Preço do produto: ");
                        double price = Convert.ToDouble(Console.ReadLine());
                        Console.Write("Quantidade do produto: ");
                        int quantity = Convert.ToInt32(Console.ReadLine());
                        inventory.AddProduct(name, price, quantity);
                        Console.WriteLine("Produto adicionado ao estoque.");
                        break;
                    case "2":
                        Console.Write("Nome do produto a ser removido: ");
                        string productName = Console.ReadLine();
                        inventory.RemoveProduct(productName);
                        Console.WriteLine("Produto removido do estoque.");
                        break;
                    case "3":
                        double totalValue = inventory.TotalValueInStock();
                        Console.WriteLine($"Valor total em estoque: ${totalValue:F2}");
                        break;
                    case "4":
                        return;
                    default:
                        Console.WriteLine("Opção inválida. Tente novamente.");
                        break;
                }
            }

        }

    }
}

