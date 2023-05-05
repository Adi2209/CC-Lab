#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sortArrival(int id[], int arrivalTime[], int burstTime[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arrivalTime[i] > arrivalTime[j])
            {
                swap(&id[i], &id[j]);
                swap(&arrivalTime[i], &arrivalTime[j]);
                swap(&burstTime[i], &burstTime[j]);
            }
            else if (arrivalTime[i] == arrivalTime[j])
            {
                if (burstTime[i] > burstTime[j])
                    swap(&id[i], &id[j]);
                swap(&arrivalTime[i], &arrivalTime[j]);
                swap(&burstTime[i], &burstTime[j]);
            }
        }
    }
}
void TATWT(int completionTime[], int arrivalTime[], int burstTime[], int TAT[], int WT[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        TAT[i] = completionTime[i] - arrivalTime[i];
        WT[i] = TAT[i] - burstTime[i];
    }
}
int main()
{
    int pos, min = 1000, n;
    float awt = 0, atat = 0;
    cout << "Enter the number of process : ";
    cin >> n;
    int id[n], arrivalTime[n], burstTime[n], completionTime[n], waitTime[n], turnAroundTime[n];

    for (int i = 0; i < n; i++)
    {
        id[i] = i + 1;
    }
    printf("Enter the Arrival Times : ");
    for (int i = 0; i < n; i++)
    {
        cin >> arrivalTime[i];
    }
    printf("Enter the Burst Time : ");
    for (int i = 0; i < n; i++)
    {
        cin >> burstTime[i];
    }
    sortArrival(id, arrivalTime, burstTime, n);
    completionTime[0] = arrivalTime[0] + burstTime[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arrivalTime[j] <= completionTime[i - 1])
            {
                if (burstTime[j] < min)
                {
                    min = burstTime[j];
                    pos = j;
                }
            }
        }
        swap(&id[i], &id[pos]);
        swap(&arrivalTime[i], &arrivalTime[pos]);
        swap(&burstTime[i], &burstTime[pos]);
        min = 1000;
        completionTime[i] = completionTime[i - 1] + burstTime[i];
    }
    TATWT(completionTime, arrivalTime, burstTime, turnAroundTime, waitTime, n);
    cout << "\nProcess\t Arrival\tBurst\t Completion\t TAT\t WT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << id[i] << "\t " << arrivalTime[i] << "\t\t" << burstTime[i] << "\t " << completionTime[i] << "\t\t " << turnAroundTime[i] << "\t " << waitTime[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        atat += turnAroundTime[i];
        awt += waitTime[i];
    }
    atat = atat / n;
    awt = awt / n;
    cout << "Average TAT : " << atat << "\nAverage Wait Time : " << awt << endl;
    return 0;
}
