// Author: Hamad Alkaabi
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  char input;
  string input2;
 do
  {

             cout<<"\n==GROCERY LIST MANAGER==";
             cout<<"\nEnter your choice: ";
             cout<<"\n (A)dd an item";
             cout<<"\n (Q)uit";
             cout<<"\nYour choice (A/Q): "<<std:: flush;
             cin>>input;
  if(input == 'A' || input == 'a')
  {
             cout<<"What is the item?\n";
             cin>>input2;

        list.push_back(input2);
  }

} while(input!='q' && input!='Q');

 if(list.size() !=0)
 {

             cout<<"==ITEMS TO BUY==";
    for(int i=0; i<list.size(); i++)
    {
             cout<<endl<<i+1 << " "<<list[i];
    }        cout<<endl;

}else
{
            cout<<"No items to buy!"<<endl;

            return 0;
  }
  return 0;
}
