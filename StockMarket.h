#include <string>
#include <unordered_map>

class StockMarket {
public:
    StockMarket();
    float getStockPrice(const std::string& stockSymbol);
    void setStockPrice(const std::string& stockSymbol, float price);

private:
    std::unordered_map<std::string, float> market;
};
