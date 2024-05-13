namespace Builder.Components
{
    class Engine
    {

        private int power;

        public int Power
        {
            get => power;
            set => power = value;
        }

        public Engine(int power)
        {
            this.Power = power;
        }

    }
}

