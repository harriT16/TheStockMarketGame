#include "StockMarket.h"

StockMarket::StockMarket() {
    // Technology stocks
    market["AAPL"] = 150.0;
    market["GOOGL"] = 2500.0;
    market["AMZN"] = 3400.0;
    market["MSFT"] = 300.0;
    market["TSLA"] = 750.0;

    // Financial stocks
    market["JPM"] = 160.0;
    market["GS"] = 350.0;
    market["V"] = 230.0;

    // Health Care
    market["PFE"] = 40.0;
    market["JNJ"] = 170.0;

    // Consumer Goods
    market["PG"] = 140.0;
    market["KO"] = 55.0;

    // Utilities
    market["NEE"] = 80.0;
    market["DUK"] = 105.0;

    // Industrials
    market["CAT"] = 220.0;
    market["MMM"] = 200.0;

    // Energy
    market["XOM"] = 60.0;
    market["CVX"] = 110.0;

    // Telecommunications
    market["T"] = 30.0;
    market["VZ"] = 60.0;

    // Real Estate
    market["PLD"] = 120.0;
    market["SPG"] = 140.0;

    // Materials
    market["APD"] = 300.0;
    market["ECL"] = 220.0;
}

float StockMarket::getStockPrice(const std::string& stockSymbol) {
    return market[stockSymbol];
}

void StockMarket::setStockPrice(const std::string& stockSymbol, float price) {
    market[stockSymbol] = price;
}
