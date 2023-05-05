#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> id;
    vector<int> ArrivalTime;
    vector<int> BurstTime;
    vector<int> CompletionTime;
    vector<int> TurnAround;
    vector<int> WaitingTime;
    int n;
    int at;
    int bt;
    cout << "Enter number of processes : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Arrival and Burst time of process " << i + 1 << " : ";
        id.push_back(i);
        cin >> at;
        ArrivalTime.push_back(at);
        cin >> bt;
        BurstTime.push_back(bt);
    }
    int x = BurstTime[0];
    CompletionTime.push_back(x);
    for (int i = 0; i < n - 1; i++)
    {
        x = CompletionTime[i] + BurstTime[i + 1];
        CompletionTime.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        x = CompletionTime[i] - ArrivalTime[i];
        TurnAround.push_back(x);
        x = TurnAround[i] - BurstTime[i];
        WaitingTime.push_back(x);
    }
    cout << "\nProcess\t Arrival\tBurst\t Completion\t TAT\t WT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << id[i] << "\t " << ArrivalTime[i] << "\t\t" << BurstTime[i] << "\t " << CompletionTime[i] << "\t\t " << TurnAround[i] << "\t " << WaitingTime[i] << endl;
    }
    cout << endl;
}
