#include <iostream>
using namespace std;
main()
{
    float input[5];
    float sum, aver;
    int i = 0;
    do
	{
    cout<< "number : ";
    cin>>input[i];
        i++;
    }
	while(i<5);
    cout<<endl;
    for(i=0; i<5; i++)
	{
        sum += input[i];		
        aver += input[i]/5;
    }
    cout<<endl;
    cout<<sum<<endl;
    cout<<aver;
    return 0;
}
