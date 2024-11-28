/*
https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
*/

vector<int> leaders(vector<int> &arr)
{
    // Code here
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}

vector<int> leaders(vector<int> &arr)
{
    // Code here
    vector<int> result;
    int maxx = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxx <= arr[arr.size() - 1 - i])
        {
            maxx = arr[arr.size() - 1 - i];
            result.push_back(arr[arr.size() - 1 - i]);
        }
    }
    for (int i = 0; i < result.size() / 2; i++)
    {
        swap(result[i], result[result.size() - 1 - i]);
    }
    return result;
}

vector<int> leaders(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] >= arr[j])
            {
                count++;
            }
        }
        if (count == arr.size() - i - 1)
        {
            result.push_back(arr[i]);
        }
    }
    return result;
}