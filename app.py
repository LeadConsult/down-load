from flask import Flask, render_template
import requests

app = Flask(__name__)
app.debug = True


@app.route('/')
def index():
    return render_template('index.html')

def cryptocurrency_graphs():
    # URLs to fetch cryptocurrency graph data
    bitcoin_url = 'https://api.coingecko.com/api/v3/coins/bitcoin/market_chart?vs_currency=usd&days=30'
    ethereum_url = 'https://api.coingecko.com/api/v3/coins/ethereum/market_chart?vs_currency=usd&days=30'
    cardano_url = 'https://api.coingecko.com/api/v3/coins/cardano/market_chart?vs_currency=usd&days=30'

    # Fetch cryptocurrency graph data
    bitcoin_response = requests.get(bitcoin_url)
    bitcoin_data = bitcoin_response.json()
    ethereum_response = requests.get(ethereum_url)
    ethereum_data = ethereum_response.json()
    cardano_response = requests.get(cardano_url)
    cardano_data = cardano_response.json()

    # Process cryptocurrency graph data
    bitcoin_prices = bitcoin_data['prices']
    bitcoin_timestamps = [price[0] for price in bitcoin_prices]
    bitcoin_values = [price[1] for price in bitcoin_prices]


if __name__ == '__main__':
    app.run()
