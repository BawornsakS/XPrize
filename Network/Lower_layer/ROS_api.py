import routeros_api
import time
import json
# global variable

connect_object = []
start = 0

def convert_to_dict(inputs = ""):
    inputs = str(inputs).replace("[","").replace("]","").replace("b","").replace("'",'"')
    inputs = json.loads(inputs)
    return inputs

def connect_router():
    global start
    connection = routeros_api.RouterOsApiPool('192.168.100.1',port=3311, username='TsBeNz', password='BANZbanz25',plaintext_login=True)
    connect_object.append(connection)
    api = connection.get_api()
    # print(api.get_resource('/queue'))
    # command = api.get_resource(input("Command ").lower())
    output = time.time()
    print("%.3f"%(output - start))
    start = output
    while True:
        print(convert_to_dict(str(api.get_resource('/').call('ping', { 'address': '192.168.100.201', 'count': '1'})))["time"])
        # print(convert_to_dict(str(api.get_resource('/system/clock').get()))["time"])
        # output = time.time()
        # print("%.3f"%(output - start))
        # start = output


if __name__ == '__main__':
    try:
        start = time.time()
        connect_router()
    except KeyboardInterrupt:
        connect_object[0].disconnect()
        print("\nShutdown ...\n")