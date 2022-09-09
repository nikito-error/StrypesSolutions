double sumOfArray(double *array, double size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
double maxNumber(double *array, double size)
{
    double max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
double average(double *array, double size)
{
    double sum = 0;
    double count = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
        count++;
    }
    return sum / count;
}