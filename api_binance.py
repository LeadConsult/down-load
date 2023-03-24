from binance.client import Client

api_key = 'rIQw63og6DFstSjVdhOC0E0waVvEQhlXx7QXv7brLzYqnYY57J9iAqVPZSoVPk0C'
api_secret = 'LpA8E4quSnsl3EtmlifqzcSG5jGyakv2GxkiQtxWghj79xXtTwjpRhgqbVgZXuY9'

client = Client(api_key, api_secret)

ticker = client.get_ticker(symbol='BTCUSDT')
ticker2 = client.get_ticker(symbol='TRXUSDT')
price = ticker['lastPrice']
price2 = ticker2['lastPrice']

print(price)
print(price2)

