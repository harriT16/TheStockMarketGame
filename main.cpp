#include <iostream>
#include "StockMarket.h"
#include "trade.h"

int main() {
    StockMarket market;
    Trade trade(market);

    char action;
    while (true) {
        std::cout << "Buy, Sell, Show Portfolio or Quit? (b/s/p/q): ";
        std::cin >> action;

        if (action == 'q') break;

        std::string stockSymbol;
        int quantity;

        if (action == 'b' || action == 's') {
            std::cout << "Enter stock symbol: ";
            std::cin >> stockSymbol;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
        }

        if (action == 'b') {
            trade.buyStock(stockSymbol, quantity);
        } else if (action == 's') {
            trade.sellStock(stockSymbol, quantity);
        } else if (action == 'p') {
            trade.showPortfolio();
        }
    }

    return 0;
}
