def formation(products):
    value = (products.pop() + products.pop()) /2

    products.append(value);

    if (len(products) >= 2):
        products = sorted(products, reverse = True)
        formation(products)

    else:
        print(value)
    
n = int(input())

products = list(map(int,input().split()))

products = sorted(products, reverse = True)

formation(products)

