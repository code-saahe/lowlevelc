int num()
{
    int a = 0;
    int b = 25;
    return b + a;
}
void fillArray(int your_array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        your_array[i] = i;
        printf("%d\n", your_array[i]);
    }
    printf("%d\n", len);
    return;
}