#include<iostream>
using namespace std;

/* Igor wants to make a fruit salad. To do that, he goes to the market where the prices are as follows:

      The price of 100 grams of apples is 30 denars, the price of 100 grams of raspberries is 50 denars, and
      the price of 100 grams of bananas is 40 denars.

      If he buys 200 grams of one type of fruit (apples/raspberries/bananas), he gets a 30% discount, and if he buys
      500 grams or more of one type of fruit, he gets a 50% discount.
      (Example: He will get a discount if he buys 500 grams of just raspberries, not a total of 500 grams from all fruits)

      Additionally: When paying, we check if Igor wants to use 140 denars from his daily student meal card.

      If YES, 140 denars are subtracted from the total amount; otherwise, the amount remains unchanged.
      How much money does Igor need to pay extra?

      Explanation of input parameters:
      We have how many grams he wants to buy of each fruit, respectively in the order apples, raspberries, bananas,
      and 1 or 0 depending on whether he wants to pay 140 denars with his student card or not. */

int main() {
       int gramsApple, gramsRaspberry, gramsBanana;
       cin >> gramsApple >> gramsRaspberry >> gramsBanana;

       double priceApple = gramsApple * 0.3;
       double priceRaspberry = gramsRaspberry * 0.5;
       double priceBanana = gramsBanana * 0.4;

      if ( gramsApple == 200) {
            priceApple -= priceApple * 0.3;
            cout << priceApple << endl;
      }
      if (gramsRaspberry == 200) {
        priceRaspberry -= priceRaspberry * 0.3;
        cout << priceRaspberry << endl;
      }
      if (gramsBanana == 200) {
        priceBanana -= priceBanana * 0.3;
        cout << priceBanana << endl;
      }
      if (gramsApple == 500) {
        priceApple -= priceApple * 0.5;
        cout << priceApple << endl;
      }
      if (gramsRaspberry == 500) {
            priceRaspberry -= priceRaspberry * 0.5;
            cout << priceRaspberry << endl;
      }
      if (gramsBanana == 500) {
            priceBanana -= priceBanana * 0.5;
            cout << priceBanana << endl;
      }
      double totalPrice = priceApple + priceRaspberry + priceBanana;
      cout << totalPrice << endl;

    return 0;
}