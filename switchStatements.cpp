#include <iostream>
using namespace std;

int main() {



int daysUntilExpiration = 12;
string message;

switch (daysUntilExpiration) {
case 0:
message = "Your subscription has expired.";
break;
case 1:
message = "Your subscription expires within a day!\nRenew now and save 20%!";
break;
case 2:
case 3:
case 4:
case 5:
message = "Your subscription expires in " + to_string(daysUntilExpiration) + " days.\nRenew now and save 10%!";
break;
case 6:
case 7:
case 8:
case 9:
case 10:
message = "Your subscription will expire soon. Renew now!";
break;
default:
message = "your subscription expires in 5 days.\n Renew now and save 10%";
break;
}
cout << message << endl;

return 0;
}