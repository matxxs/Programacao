using System;
using System.Globalization;
using System.Reflection.PortableExecutable;
using System.Runtime.CompilerServices;
using Datas;

namespace Datas
{
    public class DateTimes
    {
        public void Aula0()
        {
            Console.Clear();

            var data = new DateTime();
            Console.WriteLine(data);
        } 

        public void Aula1()
        {
            Console.Clear();
        
            //Pegar a data atual do Systema
            var data = DateTime.Now;
            Console.WriteLine(data);
        }

        public void Aula2()
        {
            Console.Clear();

            var data = new DateTime(2020, 10, 12,8, 23, 14);

            Console.WriteLine(data);
            // Year = Ano
            Console.WriteLine(data.Year);
            // Month = Mes
            Console.WriteLine(data.Month);
            // Day = Dia
            Console.WriteLine(data.Day);
            // Hour = Horas
            Console.WriteLine(data.Hour);
            // Minute = Minutos
            Console.WriteLine(data.Minute);
            // Second = Segundos
            Console.WriteLine(data.Second);
            // Day Of Weel =Dia da Semana
            Console.WriteLine(data.DayOfWeek);
        }
    
        public void Aula3()
        {
            Console.Clear();

            var data = DateTime.Now;

            string formatada = String.Format("{0:dd/MM/yyyy hh:mm:ss ff z}", data);
            Console.WriteLine(formatada);
            
        }

        public void Aula4()
        {
            Console.Clear();

            var data = DateTime.Now;

            // FORMATAÇÃO PADRÃO 
            // t or T - d or D - f - g - y
            // r or R - s - u - principais
            string formatada = String.Format("{0:u}", data);
            Console.WriteLine(formatada);           
        }

        public void Aula5()
        {
            Console.Clear();

            var data = DateTime.Now;
            Console.WriteLine(data);

            Console.WriteLine(data.AddDays(12));
            Console.WriteLine(data.AddYears(1));
            Console.WriteLine(data.AddMonths(1));
        }
        public void Aula6()
        {
            Console.Clear();

            DateTime data = DateTime.Now;

            if(data.Date == DateTime.Now.Date)
                Console.WriteLine("É igual");

            Console.WriteLine(data.Date);
        }

        public void Aula7()
        {
            Console.Clear();

            var pt = new CultureInfo("pt-PT");
            var br = new CultureInfo("pt-BR");
            var en = new CultureInfo("en-US");
            var de = new CultureInfo("de-DE");
            var atual = CultureInfo.CurrentCulture;

            Console.WriteLine(DateTime.Now.ToString("D", atual));
        }

        public void Aula8()
        {
            Console.Clear();

            var utcDate = DateTime.UtcNow;

            // Console.WriteLine(DateTime.Now);
            // Console.WriteLine(utcDate);

            // Console.WriteLine(utcDate.ToLocalTime());

            // var timezoneAustralia = TimeZoneInfo.FindSystemTimeZoneById("Pacific/Auckland");
            // Console.WriteLine(timezoneAustralia);

            // var horaAustralia = TimeZoneInfo.ConvertTimeFromUtc(utcDate, timezoneAustralia);
            // Console.WriteLine(horaAustralia);

            var timezones = TimeZoneInfo.GetSystemTimeZones();
            foreach( var timezone in timezones){

                Console.WriteLine(timezone.Id);
                Console.WriteLine(timezone);
                Console.WriteLine(TimeZoneInfo.ConvertTimeFromUtc(utcDate, timezone));
                Console.WriteLine("---------");
            }
        }

        public void Aula9()
        {
            Console.Clear();

            var timeSpan = new TimeSpan();
            Console.WriteLine(timeSpan);

            var timeSpanNanosegungos = new TimeSpan(1);
            Console.WriteLine(timeSpanNanosegungos);

            var timeSpanHorasMinutoSegundo = new TimeSpan(5, 15, 8);
            Console.WriteLine(timeSpanHorasMinutoSegundo);

            var timeSpanDiaHorasMinutoSegundo = new TimeSpan(3, 5, 50, 10);
            Console.WriteLine(timeSpanDiaHorasMinutoSegundo);

            var timeSpanDiaHorasMinutoSegundoMilissegundo = new TimeSpan(15, 12, 55, 8, 100);
            Console.WriteLine(timeSpanDiaHorasMinutoSegundoMilissegundo);

            Console.WriteLine(timeSpanHorasMinutoSegundo - timeSpanDiaHorasMinutoSegundo);
            Console.WriteLine(timeSpanDiaHorasMinutoSegundo.Days);
            Console.WriteLine(timeSpanDiaHorasMinutoSegundo.Add(new TimeSpan(12, 0, 0)));
        }
    
        public void Aula10()
        {
            Console.Clear();
            
            Console.WriteLine(DateTime.DaysInMonth(2020,2));
            Console.WriteLine(IsWeekend(DateTime.Now.DayOfWeek)); 
            Console.WriteLine(DateTime.Now.IsDaylightSavingTime());
        }

        static bool IsWeekend(DayOfWeek today)
        {
            return today == DayOfWeek.Saturday || today == DayOfWeek.Sunday;
        }
    }
}