#include "StockMarket.h"

class Trade {
public:
    Trade(StockMarket& market);
    void buyStock(const std::string& stockSymbol, int quantity);
    void sellStock(const std::string& stockSymbol, int quantity);
    void showPortfolio();

private:
    StockMarket& market;
    std::unordered_map<std::string, int> portfolio;
};
