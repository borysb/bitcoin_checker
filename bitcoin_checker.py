#!/usr/bin/python3
#test niedziałającego gita

import requests

data = {
    "token":"uqnqgiesdf3hxni3f1rx6u4ucb8qaw",
    "user":"xxx",
    #"device":"fairphone3",
    "message":""
}

f_path = "/home/ubuntu/scripts/previous.txt"

r = requests.get("https://api.coindesk.com/v1/bpi/currentprice/PLN.json")

current_price = r.json()['bpi']['USD']['rate']
pln = r.json()['bpi']['PLN']['rate']

with open(f_path, 'r') as file:
    previous = file.read().splitlines()

percent = float(current/previous)
previous = int(previous[0][:2])
current = int(current_price[:2])

if 0,99 <= percent <= 1,01
	break
else 
	if current > previous:
 	   data['message'] = "BTC price just reached {}k USD. The exact price is {} USD ({} PLN.)".format(current, current_price, pln)
	elif current < previous:
    	data['message'] = "BTC price just dropped below the {}k USD. The exact price is {} USD ({} PLN.)".format(previous, current_price, pln)
	elif current == previous:
    	exit()

push = requests.post("https://api.pushover.net/1/messages.json", json=data)

with open (f_path,'w') as file:
    file.write(current_price)