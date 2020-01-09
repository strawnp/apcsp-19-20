# create empty dictionary that associates an item with its price
menu_items = {}

# add several items to dictionary
menu_items["California Burrito"] = 7.5
menu_items["Carne Asada Tacos"] = 4.3
menu_items["Super Nachos"] = 9.5
menu_items["Churro"] = 1.25

# display dictionary
print(menu_items)

# change value of an item already in a dictionary
menu_items["Churro"] = 1.35

# remove item from menu
del menu_items["Super Nachos"]

# display dictionary
print(menu_items)

# displaying the items on the menu (the dictionary's "keys")
for item in menu_items.keys():
    print(item)

# adding up the costs of all the items on the menu (the dictionary's "values")
total_cost = 0
for cost in menu_items.values():
    total_cost += cost
print("${:.2f}".format(total_cost))

# print the complete dictionary in a "prettified" format
for food, price in menu_items.items():
    print(food + ": " + "${:.2f}".format(price))