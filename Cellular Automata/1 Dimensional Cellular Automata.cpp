#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int k;
    int Ta[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    int Ap[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,5,0,5,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };


    for (k = 0; k < 200; k++)
    {
        for (i = 0; i < 121; i++)
        {
            if (i == 0)
            {
                if ((Ap[i] == 0 && Ap[i + 1] == 5) || (Ap[i] == 5 && Ap[i + 1] == 5)) // Triangle fractal
                {
                    Ta[i] = 5;
                }
            }
            else if (i == 120)
            {
                if ((Ap[i - 1] == 5 && Ap[i] == 0) || (Ap[i - 1] == 5 && Ap[i] == 5)) // Triangle fractal
                {
                    Ta[i] = 5;
                }
            }
            else
            {
                if ((Ap[i - 1] == 5 && Ap[i] == 0 && Ap[i + 1] == 0) || (Ap[i - 1] == 5 && Ap[i] == 5 && Ap[i + 1] == 0) || (Ap[i - 1] == 0 && Ap[i] == 5 && Ap[i + 1] == 5) || (Ap[i - 1] == 0 && Ap[i] == 0 && Ap[i + 1] == 5)) // Triangle fractal
                {
                    Ta[i] = 5;
                }
            }
        }
        for (j = 0; j < 121; j++)
        {
            Ap[j] = Ta[j];
            Ta[j] = 0;
            cout << Ap[j];
        }
        cout << endl;
    }
}