#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct item
{
  string name;
  double price;
  int pcs;
  double totalItem;
};

item itemquest(item iteminfo)
{
  cout << "What did you get?" << endl;
  cin >> iteminfo.name;

  cout << "How much a piece cost? (in EGP)" << endl;
  cin >> iteminfo.price;

  cout << "How many pieces did you get?" << endl;
  cin >> iteminfo.pcs;

  iteminfo.totalItem = iteminfo.price * iteminfo.pcs;

  cout << "You've spent " << iteminfo.totalItem << ".\n";
  cout << "Please more careful.. You really need to get married as soon as possible." << endl;
  return iteminfo;
}

int main()
{
  int expenses, totalspent;
  expenses = totalspent = 0;
  vector<item> myitems;
  char answer;
  item expense;

  cout << "How much money did you get this month?" << endl;
  cin >> expenses;

  cout << "Did you spend any money this month? (y/n)" << endl;
  cin >> answer;

  for (int i = 0; i > -1; i++)
  {

    if (i == 0)
    {
      if (answer == 'n' || answer == 'N')
      {
        cout << "Saving all your expenses this month is exceptional!\n"
             << "Wait for me ma cutie bootie pear.. our marriage is just a matter of time.." << endl;
        return 0;
      }
      else
        myitems.emplace_back(itemquest(expense));
    }

    else
    {
      cout << "Did you get anything else? (y/n)" << endl;
      cin >> answer;

      if (answer == 'n' || answer == 'N')
      {
        cout << "Fair enough, stay solid ma man!" << endl;
        break;
      }

      else
      {
        cout << "Oh man.." << endl;
        myitems.emplace_back(itemquest(expense));
      }
    }
  }

  for (int i = 0; i < myitems.size(); i++)
    totalspent += myitems[i].totalItem;

  cout << "Do you want to see your total spendings? (y/n)" << endl;
  cin >> answer;

  if (answer == 'n' || answer == 'N')
  {
    cout << "Alright, don't forget to send salawat upon the Prophet ﷺ" << endl;
    return 0;
  }

  cout << "You've spent a total of " << totalspent << "/" << expenses << endl;
  if (totalspent == expenses)
    cout << "Oh god..\n"
         << "No worries tho, next month is our month! (lier..)" << endl;
  else if (totalspent < expenses / 2)
    cout << "Great job ma man, you've saved more than half of your expense!\n"
         << "Do your best next month!\n"
         << "Your cutie booty pear is waiting for you!" << endl;
  else if (totalspent > expenses)
    cout << "MF YOU GOT A WIFE WAITING FOR YOU!\nSTOP SPENDING YOUR MONEY ON TYPESHIT!!" << endl;
  else
    cout << "Even the mightiest fall..\n"
            "No worries buddy, we'll do better next month."
         << endl;
}