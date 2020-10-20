#ifndef INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#define INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#define CCAPI_EXCHANGE_NAME_MARKET_DEPTH "MARKET_DEPTH"
#define CCAPI_EXCHANGE_NAME_TRADE "TRADE"
#ifndef CCAPI_EXCHANGE_NAME_MARKET_DEPTH_MAX
#define CCAPI_EXCHANGE_NAME_MARKET_DEPTH_MAX CCAPI_EXCHANGE_NAME_MARKET_DEPTH "_MAX"
#endif
#define CCAPI_EXCHANGE_NAME_MARKET_DEPTH_SUBSCRIBED_TO_EXCHANGE CCAPI_EXCHANGE_NAME_MARKET_DEPTH "_SUBSCRIBED_TO_EXCHANGE"
#define CCAPI_EXCHANGE_VALUE_MARKET_DEPTH_MAX_DEFAULT "10"
#ifndef CCAPI_EXCHANGE_NAME_CONFLATE_INTERVAL_MILLISECONDS
#define CCAPI_EXCHANGE_NAME_CONFLATE_INTERVAL_MILLISECONDS "CONFLATE_INTERVAL_MILLISECONDS"
#endif
#define CCAPI_EXCHANGE_VALUE_CONFLATE_INTERVAL_MILLISECONDS_DEFAULT "0"
#ifndef CCAPI_EXCHANGE_NAME_CONFLATE_GRACE_PERIOD_MILLISECONDS
#define CCAPI_EXCHANGE_NAME_CONFLATE_GRACE_PERIOD_MILLISECONDS "CONFLATE_GRACE_PERIOD_MILLISECONDS"
#endif
#define CCAPI_EXCHANGE_VALUE_CONFLATE_GRACE_PERIOD_MILLISECONDS_DEFAULT "-1"
#ifndef CCAPI_EXCHANGE_NAME_COINBASE
#define CCAPI_EXCHANGE_NAME_COINBASE "coinbase"
#endif
#ifndef CCAPI_EXCHANGE_NAME_GEMINI
#define CCAPI_EXCHANGE_NAME_GEMINI "gemini"
#endif
#ifndef CCAPI_EXCHANGE_NAME_KRAKEN
#define CCAPI_EXCHANGE_NAME_KRAKEN "kraken"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITSTAMP
#define CCAPI_EXCHANGE_NAME_BITSTAMP "bitstamp"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITFINEX
#define CCAPI_EXCHANGE_NAME_BITFINEX "bitfinex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITMEX
#define CCAPI_EXCHANGE_NAME_BITMEX "bitmex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_US
#define CCAPI_EXCHANGE_NAME_BINANCE_US "binance-us"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE
#define CCAPI_EXCHANGE_NAME_BINANCE "binance"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_FUTURES
#define CCAPI_EXCHANGE_NAME_BINANCE_FUTURES "binance-futures"
#endif
#ifndef CCAPI_EXCHANGE_NAME_HUOBI
#define CCAPI_EXCHANGE_NAME_HUOBI "huobi"
#endif
#ifndef CCAPI_EXCHANGE_NAME_OKEX
#define CCAPI_EXCHANGE_NAME_OKEX "okex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_LAST_PRICE
#define CCAPI_EXCHANGE_NAME_LAST_PRICE "LAST_PRICE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_LAST_SIZE
#define CCAPI_EXCHANGE_NAME_LAST_SIZE "LAST_SIZE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_TRADE_ID
#define CCAPI_EXCHANGE_NAME_TRADE_ID "TRADE_ID"
#endif
#ifndef CCAPI_EXCHANGE_NAME_IS_BUYER_MAKER
#define CCAPI_EXCHANGE_NAME_IS_BUYER_MAKER "IS_BUYER_MAKER"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_BID_N_PRICE
#define CCAPI_EXCHANGE_NAME_BEST_BID_N_PRICE "BID_PRICE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_BID_N_PRICE_EMPTY
#define CCAPI_EXCHANGE_NAME_BEST_BID_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_BID_N_SIZE
#define CCAPI_EXCHANGE_NAME_BEST_BID_N_SIZE "BID_SIZE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_BID_N_SIZE_EMPTY
#define CCAPI_EXCHANGE_NAME_BEST_BID_N_SIZE_EMPTY ""
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_ASK_N_PRICE
#define CCAPI_EXCHANGE_NAME_BEST_ASK_N_PRICE "ASK_PRICE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_ASK_N_PRICE_EMPTY
#define CCAPI_EXCHANGE_NAME_BEST_ASK_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_ASK_N_SIZE
#define CCAPI_EXCHANGE_NAME_BEST_ASK_N_SIZE "ASK_SIZE"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BEST_ASK_N_SIZE_EMPTY
#define CCAPI_EXCHANGE_NAME_BEST_ASK_N_SIZE_EMPTY ""
#endif
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_COINBASE_CHANNEL_MATCH "matches"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_COINBASE_CHANNEL_LEVEL2 "level2"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_GEMINI_PARAMETER_TRADES "trades"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_GEMINI_PARAMETER_BIDS "bids"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_GEMINI_PARAMETER_OFFERS "offers"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_GEMINI_PARAMETER_TOP_OF_BOOK "top_of_book"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_KRAKEN_CHANNEL_TRADE "trade"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_KRAKEN_CHANNEL_BOOK "book"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITSTAMP_CHANNEL_LIVE_TRADES "live_trades"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITSTAMP_CHANNEL_ORDER_BOOK "order_book"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITFINEX_CHANNEL_TRADES "trades"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITFINEX_CHANNEL_BOOK "book"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITMEX_CHANNEL_TRADE "trade"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITMEX_CHANNEL_QUOTE "quote"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_10 "orderBook10"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2_25 "orderBookL2_25"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2 "orderBookL2"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BINANCE_BASE_CHANNEL_TRADE "trade"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_BINANCE_BASE_CHANNEL_PARTIAL_BOOK_DEPTH "depth"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL "market.$symbol.trade.detail"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL_REGEX "market\\.(.+)\\.trade\\.detail"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH "market.$symbol.depth.step0"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH_REGEX "market\\.(.+)\\.depth\\.step0"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_OKEX_CHANNEL_TRADE "spot/trade"
#define CCAPI_EXCHANGE_NAME_WEBSOCKET_OKEX_CHANNEL_PUBLIC_DEPTH400 "spot/depth"
#ifndef CCAPI_EXCHANGE_NAME_CHANNEL_ID
#define CCAPI_EXCHANGE_NAME_CHANNEL_ID "channelId"
#endif
#ifndef CCAPI_EXCHANGE_NAME_PRODUCT_ID
#define CCAPI_EXCHANGE_NAME_PRODUCT_ID "productId"
#endif
#define CCAPI_EXCHANGE_NAME_CONNECTION "connection"
#define CCAPI_EXCHANGE_NAME_REASON "reason"
#define CCAPI_EXCHANGE_NAME_ERROR_MESSAGE "message"
#define CCAPI_EXCHANGE_NAME_MARKET_DATA_SERVICE "market_data"
#define CCAPI_EXCHANGE_NAME_EXECUTION_MANAGEMENT "execution_management"
#ifndef BINANCE_US_API_KEY
#define BINANCE_US_API_KEY "BINANCE_US_API_KEY"
#endif
#ifndef BINANCE_US_API_SECRET
#define BINANCE_US_API_SECRET "BINANCE_US_API_SECRET"
#endif
#ifndef CCAPI_EM_SIDE
#define CCAPI_EM_SIDE "SIDE"
#endif
#ifndef CCAPI_EM_SIDE_BUY
#define CCAPI_EM_SIDE_BUY "BUY"
#endif
#ifndef CCAPI_EM_SIDE_SELL
#define CCAPI_EM_SIDE_SELL "SELL"
#endif
#ifndef CCAPI_EM_QUANTITY
#define CCAPI_EM_QUANTITY "QUANTITY"
#endif
#ifndef CCAPI_EM_LIMIT_PRICE
#define CCAPI_EM_LIMIT_PRICE "LIMIT_PRICE"
#endif
#ifndef CCAPI_EM_ORDER_ID
#define CCAPI_EM_ORDER_ID "ORDER_ID"
#endif
#ifndef CCAPI_HTTP_STATUS_CODE
#define CCAPI_HTTP_STATUS_CODE "HTTP_STATUS_CODE"
#endif
#define CCAPI_ERROR_MESSAGE "ERROR_MESSAGE"
#endif  // INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_