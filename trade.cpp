#include <iostream>
#include "trade.h"

Trade::Trade(StockMarket& market) : market(market) {}

void Trade::buyStock(const std::string& stockSymbol, int quantity) {
    float price = market.getStockPrice(stockSymbol);
    std::cout << "Bought " << quantity << " shares of " << stockSymbol << " at " << price << " each.\n";
    portfolio[stockSymbol] += quantity;
}

void Trade::sellStock(const std::string& stockSymbol, int quantity) {
    if (portfolio[stockSymbol] < quantity) {
        std::cout << "Not enough shares to sell\n";
        return;
    }
    float price = market.getStockPrice(stockSymbol);
    std::cout << "Sold " << quantity << " shares of " << stockSymbol << " at " << price << " each.\n";
    portfolio[stockSymbol] -= quantity;
}

void Trade::showPortfolio() {
    std::cout << "Your Portfolio:\n";
    for (auto& pair : portfolio) {
        std::cout << pair.first << ": " << pair.second << " shares\n";
    }
}
