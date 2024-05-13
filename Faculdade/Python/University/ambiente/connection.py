from mysql.connector import connect

def mysql_connection(host, user, passwd, database):
    connection = connect(
        host = host,
        user = user,
        passwd = passwd,
        database = database
    )
    return connection

connection = mysql_connection('localhost', 'root', '123456', 'bd_esup')