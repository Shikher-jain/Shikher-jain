import mysql.connector
conn = mysql.connector.connect(
    host="localHost",
    user="Username",
    password="password",
    database="database"
)
print(conn)
cursor = conn.cursor()
print(cursor)
cousor.execute("poiuytrewqlkjhgfdsamnbvcxz")
conn.commit()
conn.close()