#include<iostream> 

using namespace std;

int main()
{
	int nums;
	cin >> nums;
	int arr[nums];
	int target;
	cin >>target;

	for(int i=0;i<nums;i++)
	{

		cin >> arr[i];
	}

	for(int i=0;i<nums;i++)
	{
		for(int j=1;j<=nums;j++)
		{
			if(arr[i] + arr[j] == target)
			{
				if(i<=j)
				{
					cout << "[" << i << "," << j << "]" << endl;
				}
				else
				{
					cout << "[" << j << "," << i << "]" << endl;

				}
			}
				j++;
		}
				i++;
	}
	return 0;
}
