namespace Dip.Model
{
    class SqlServerProduct : DbProduct
    {

        public string GetProductById(string id)
        {

            return $"SQLServer: Exibindo dados do produto {id}.";

        }

    }
}
