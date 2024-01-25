#include<iostream>
#include<string>
using namespace std;

/* Marta nad three friends go to the movies. 1 ticket is 200den. They pay for the genre, drinks, and if it's
 * a Wednesday and they are paying with card they get 50% off only on tickets.*/

int main(){
    int price_for_drinks = 0, amount_of_popcorn, popcorn_price = 0, price_tickets = 800, total_price = 0, card, drink_amount;
    string genre, popcorn, day, drink;

    cin >> genre >> popcorn >> amount_of_popcorn >> drink >> drink_amount >> day >> card;

    if (genre == "action"){
        price_tickets += 40 * 4;
    } else if (genre == "comedy") {
        price_tickets += 20 * 4;
    } else if (genre == "romance"){
        price_tickets += 30 * 4;
    }

    if(day == "Wednesday" && card == 1){
        price_tickets /= 2;
    }

    total_price += price_tickets;

    if (drink == "Fanta" || drink == "CocaCola" || drink == "Sprite" ){
        price_for_drinks = 100 * drink_amount;
    } else if (drink == "Water") {
        price_for_drinks =  80 * drink_amount;
    } else if (drink == "IceTea") {
        price_for_drinks = 120 * drink_amount;
    }
    total_price += price_for_drinks;

    if (popcorn == "L") {
        popcorn_price = amount_of_popcorn * 200;
    } else if (popcorn == "M"){
        popcorn_price = amount_of_popcorn * 150;
    } else if (popcorn == "S") {
        popcorn_price = amount_of_popcorn * 100;
    }
    total_price += popcorn_price;

    cout << total_price;

    return 0;
}