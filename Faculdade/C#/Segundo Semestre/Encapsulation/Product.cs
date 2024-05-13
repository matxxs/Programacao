using System;
using System.Collections.Generic;
using System.Diagnostics.Contracts;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class Product
    {
        private string _name;
        private double _price;
        private int _amount;

        public string GetName(){ 
            return _name; 
        }

        public void SetName(string name){ 
            _name = name;
        }

        public double GetPrice(){
            return _price;
        }

        public int GetAmount(){
            return _amount;
        }

        public Product()
        {
        }

        public Product(string name, double price, int amount)
        {
            _name = name;
            _price = price;
            _amount = amount;
        }
        public double ValorTotalEmEstoque()
        {
            return _price * _amount;
        }
        public void AdicionarProdutos(int amount)
        {
            _amount += amount;
        }
        public void RemoverProdutos(int amount)
        {
            _amount -= amount;
        }
        public override string ToString()
        {
            return _name
            + ", $ "
            + _price.ToString("F2", CultureInfo.InvariantCulture)
            + ", "
            + _amount
            + " unidades, Total: $ "
            + ValorTotalEmEstoque().ToString("F2", CultureInfo.InvariantCulture);
        }
    }
}
