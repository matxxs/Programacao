using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Atividade_07_11_2023
{
    class Inventory
    {
        private List<Product> products = new List<Product>();

        public void AddProduct(string name, double price, int quantity)
        {
            Product product = new Product
            {
                Name = name,
                Price = price,
                Quantity = quantity
            };
            products.Add(product);
        }

        public void RemoveProduct(string name)
        {
            Product productToRemove = products.Find(p => p.Name == name);
            if (productToRemove != null)
            {
                products.Remove(productToRemove);
            }
        }

        public double TotalValueInStock()
        {
            double totalValue = 0;
            foreach (Product product in products)
            {
                totalValue += product.TotalValue();
            }
            return totalValue;
        }
    }
}
