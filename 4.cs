// See https://aka.ms/new-console-template for more information
int j = 0;
Console.Write("Enter a number: ");
int number = Convert.ToInt32(Console.ReadLine());

for (int i = 0; i <= number; i++)
{
    if (i < number)
    {
        Console.Write(i + " + ");
    }
    else if(i == number)
    {
        Console.Write(i + " = ");
    }
    j = j + i;
}
Console.Write(j);
Console.WriteLine();
