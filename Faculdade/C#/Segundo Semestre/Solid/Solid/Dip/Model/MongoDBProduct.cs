namespace Dip.Model
{
    class MongoDBProduct : DbProduct
    {
        public string GetProductById(string id)
        {

            return $"MongoDB: Exibindo dados do produto {id}.";

        }
    }
}
