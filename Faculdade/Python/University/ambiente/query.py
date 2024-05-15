from connection import *

def get_courses_info():

    cursor = connection.cursor()
    cursor.execute('SELECT IDCURSO, NOMECURSO FROM CURSO')
    results = cursor.fetchall()
    cursor.close()

    return {result[1]: result[0] for result in results} 


def get_teachers_info():

    cursor = connection.cursor()
    cursor.execute('SELECT IDPROFESSOR, NOME  FROM PROFESSOR')
    results = cursor.fetchall()
    cursor.close()

    return {result[1]: result[0] for result in results} 


# SELECT MAX(IDESTUDANTE) AS ID, MAX(NOME) AS NOME FROM ESTUDANTE;
def get_student_id():

    cursor = connection.cursor()
    cursor.execute('SELECT MAX(IDESTUDANTE) FROM ESTUDANTE')
    result = cursor.fetchone()
    cursor.close()

    max_id = result[0]
    return max_id