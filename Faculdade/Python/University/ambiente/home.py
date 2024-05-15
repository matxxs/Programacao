import tkinter as tk
from tkinter import ttk, messagebox
from tkcalendar import Calendar
from datetime import date
from connection import *
from query import *

class MainWindow:
    def __init__(self, master=None):
        self.root = master
        menu_bar = tk.Menu(self.root)

        # Menu de Cadastro
        menu_register = tk.Menu(menu_bar, tearoff=0)

        menu_bar.add_cascade(label="Cadastro", menu=menu_register)
        menu_register.add_command(label="Curso", command=lambda: self.open_window("curso"))
        menu_register.add_command(label="Disciplina", command=lambda: self.open_window("disciplina"))
        menu_register.add_command(label="Estudante", command=lambda: self.open_window("estudante"))
        menu_register.add_command(label="Professor", command=lambda: self.open_window("professor"))

        # Menu Relatório
        menu_bar.add_command(label="Relatório", command=self.semcomando)

        self.root.config(menu=menu_bar)

    def semcomando(self):
        print("")

    def open_window(self, window_type):
        self.root.withdraw()
        selected_window = tk.Toplevel(self.root)

        if window_type == "curso":
            window = CourseWindow(selected_window)

        elif window_type == "disciplina":
            window = DisciplineWindow(selected_window)

        elif window_type == "estudante":
            window = StudentWindow(selected_window)

        elif window_type == "professor":
            window = TeacherWindow(selected_window)

class CourseWindow:
    def __init__(self, master):

        def clear_fields():
        
            # course_name_entry.delete(0, END)
            # date_entry.delete(0, END)
            # period_combobox.delete(0, END)
            # semester_spinbox.delete(0, END)
            # coordinator_combobox.delete(0, END)

            course_name_entry.focus()

        def enter_data():
            
            courseName = course_name_entry.get()
            date = date_entry.get()
            period = period_combobox.get()
            semester = semester_spinbox.get()
            coordinator_name = coordinator_combobox.get()
            coordinator_id = coordinator_dict[coordinator_name] 

            query = (f"INSERT INTO CURSO(NOMECURSO, ANO, PERIODO, SEMETRE, COORDENADORID) VALUES('{courseName}','{date}','{period}','{semester}','{coordinator_id}')")

            cursor = connection.cursor()
            cursor.execute(query)
            connection.commit()
            cursor.close()

            clear_fields()

        self.root = master

        frame = tk.Frame(self.root)
        frame.pack()

        # Course Info
        course_info_frame = tk.LabelFrame(frame, text = "Cadastro Curso")
        course_info_frame.grid(row = 1, column = 0, padx = 20, pady = 10)

        course_name_label = tk.Label(course_info_frame, text = "Nome ")
        course_name_entry = tk.Entry(course_info_frame, width = 25)

        course_name_label.grid(row = 0, column = 0)
        course_name_entry.grid(row = 1, column = 0)

        date_label = tk.Label(course_info_frame, text = "Ano")
        date_entry = tk.Entry(course_info_frame, width = 5)

        date_label.grid(row = 2, column = 3)
        date_entry.grid(row = 3, column = 3)

        period_label = tk.Label(course_info_frame, text = "Período")
        period_combobox  = ttk.Combobox(course_info_frame, values = ["Matutino", "Vespertino", "Noturno"])

        period_label.grid(row = 2, column = 0)
        period_combobox.grid(row = 3, column = 0)

        semester_label = tk.Label(course_info_frame, text = "Semestre")
        semester_spinbox = tk.Spinbox(course_info_frame, from_= 0, to = 16, width = 5)

        semester_label.grid(row = 2, column = 1 )
        semester_spinbox.grid(row = 3, column = 1)

        coordinator_label = tk.Label(course_info_frame, text = "Coordenador")
        coordinator_dict = get_teachers_info()
        coordinator_combobox = ttk.Combobox(course_info_frame, values=list(coordinator_dict.keys()))
        coordinator_label.grid(row = 4, column = 0)
        coordinator_combobox.grid(row = 5, column = 0)

        for widget in course_info_frame.winfo_children():
            widget.grid_configure(padx = 5, pady = 5, sticky= "w")

        # Button 
        button_back = tk.Button(frame, text = "Voltar", command = self.back_to_main_window)
        button_back.grid(row = 2, column = 0,  sticky="w", padx = 20, pady = 10)

        button_register = tk.Button(frame, text = "Cadastrar", command = enter_data)
        button_register.grid(row = 2, column = 0, sticky = "e", padx = 20, pady = 10)

        self.root.protocol("WM_DELETE_WINDOW", self.on_close)

    def on_close(self):
        self.root.destroy()
        main_window.root.deiconify()

    def back_to_main_window(self):
        self.root.destroy()
        main_window.root.deiconify()
                     
class DisciplineWindow:
    def __init__(self, master):

        def enter_data():
            
            query = ""

            cursor = connection.cursor()
            cursor.execute(query)
            connection.commit()
            cursor.close()

        self.root = master

        frame = tk.Frame(self.root)
        frame.pack()

        # Discipline Info
        discipline_info_frame = tk.LabelFrame(frame, text = "Cadastro Disciplina")
        discipline_info_frame.grid(row = 1, column = 0, padx = 20, pady = 10)

        discipline_name_label = tk.Label(discipline_info_frame, text = "Nome ")
        discipline_name_entry = tk.Entry(discipline_info_frame, width = 25)

        discipline_name_label.grid(row = 0, column = 0)
        discipline_name_entry.grid(row = 1, column = 0)

        description_label = tk.Label(discipline_info_frame, text = "Descrição")
        description_entry = ttk.Entry(discipline_info_frame, width = 35)

        description_label.grid(row = 2, column = 0)
        description_entry.grid(row = 3, column = 0, columnspan = 2)

        workload_label = tk.Label(discipline_info_frame, text = "Carga Horária")
        workload_spinbox = tk.Spinbox(discipline_info_frame, from_= 0, to = 60, width = 5)

        workload_label.grid(row = 0, column = 1)
        workload_spinbox.grid(row = 1, column = 1)

        teacher_label = tk.Label(discipline_info_frame, text = "Professor")
        teacher_dict = get_teachers_info()
        teacher_combobox = ttk.Combobox(discipline_info_frame, values=list(teacher_dict.keys()))
        teacher_label.grid(row = 4, column = 0)
        teacher_combobox.grid(row = 5, column = 0)

        course_label = tk.Label(discipline_info_frame, text = "Curso")
        course_dict = get_courses_info() 
        course_combobox = ttk.Combobox(discipline_info_frame, values = list(course_dict.keys()))
        course_label.grid(row = 6, column = 0)
        course_combobox.grid(row = 7, column = 0)

        for widget in discipline_info_frame.winfo_children():
            widget.grid_configure(padx = 5, pady = 5, sticky= "w")

        # Button 
        button_back = tk.Button(frame, text = "Voltar", command = self.back_to_main_window)
        button_back.grid(row = 2, column = 0,  sticky="w", padx = 20, pady = 10)

        button_register = tk.Button(frame, text = "Cadastrar", command = enter_data)
        button_register.grid(row = 2, column = 0, sticky = "e", padx = 20, pady = 10)

        self.root.protocol("WM_DELETE_WINDOW", self.on_close)

    def on_close(self):
        self.root.destroy()
        main_window.root.deiconify()

    def back_to_main_window(self):
        self.root.destroy()
        main_window.root.deiconify()

class StudentWindow:
    def __init__(self, master):
        def enter_data():

            # Obter Informações do Usuario
            fullName = full_name_entry.get()
            dateBirth = date_birth_entry.get()
            state = state_entry.get()
            city = city_entry.get()
            course_name = course_combobox.get()
            course_id = course_dict[course_name] 
            highSchool = high_school_combobox.get()

            # Cadastrar de Estudante  
            query  =  (f"INSERT INTO ESTUDANTE(NOME, DTANIVERSARIO, CIDADE, ESTADO, CURSO_IDCURSO, ENSINOMEDIO) VALUES ('{fullName}', '{dateBirth}', '{city}', '{state}', {course_id}, '{highSchool}')")

            cursor = connection.cursor()
            cursor.execute(query)
            connection.commit()
            cursor.close()

            # Cadastrar Matricula
            id_student = get_student_id()
            matriculation_date = date.today()

            insert_matriculation = (f"INSERT INTO MATRICULA(DATAMATRICULA, ESTUDANTE_IDESTUDANTE) VALUES ('{matriculation_date}', '{id_student}')")

            cursor = connection.cursor()
            cursor.execute(insert_matriculation)
            connection.commit()
            cursor.close()

            #messagebox.showinfo("Sucesso," "Operação realizada com sucesso")
             
        self.root = master

        frame = tk.Frame(self.root)
        frame.pack()

        # Salvando informações do usuário
        user_info_frame = tk.LabelFrame(frame, text = "Informações Usuário")
        user_info_frame.grid(row = 1, column = 0, padx = 20, pady = 10)

        full_name_label = tk.Label(user_info_frame, text = "Nome Completo")
        full_name_entry = tk.Entry(user_info_frame)

        full_name_label.grid(row = 0, column = 0)
        full_name_entry.grid(row = 1, column = 0)

        date_birth_label = tk.Label(user_info_frame, text = "Data de Nascimento")
        date_birth_entry = tk.Entry(user_info_frame)
        button_Calendar = ttk.Button(user_info_frame, text = "Calendario")

        date_birth_label.grid(row = 0, column = 1)
        date_birth_entry.grid(row = 1, column = 1)
        button_Calendar.grid(row = 1, column = 2)

        state_label = tk.Label(user_info_frame, text = "Estado")
        state_entry = tk.Entry(user_info_frame)

        state_label.grid(row = 2, column = 0)
        state_entry.grid(row = 3, column = 0)

        city_label = tk.Label(user_info_frame, text = "Cidade")
        city_entry = tk.Entry(user_info_frame)

        city_label.grid(row = 2, column = 1)
        city_entry.grid(row = 3, column = 1)

        course_label = tk.Label(user_info_frame, text = "Curso")
        course_dict = get_courses_info() 
        course_combobox = ttk.Combobox(user_info_frame, values = list(course_dict.keys()))
        course_label.grid(row = 4, column = 0)
        course_combobox.grid(row = 5, column = 0)

        high_school_label = tk.Label(user_info_frame, text = "Escolaridade")
        high_school_combobox = ttk.Combobox(user_info_frame, values = ["Complento", "Cursando"])
        high_school_label.grid(row = 6, column = 0)
        high_school_combobox.grid(row = 7, column = 0)

        for widget in user_info_frame.winfo_children():
            widget.grid_configure(padx = 10, pady = 5)

        # Button 
        button_back = tk.Button(frame, text = "Voltar", command = self.back_to_main_window)
        button_back.grid(row = 2, column = 0,  sticky="w", padx = 20, pady = 10)

        button_register = tk.Button(frame, text = "Cadastrar", command = enter_data)
        button_register.grid(row = 2, column = 0, sticky = "e", padx = 20, pady = 10)

        self.root.protocol("WM_DELETE_WINDOW", self.on_close)

    def on_close(self):
        self.root.destroy()
        main_window.root.deiconify()

    def back_to_main_window(self):
        self.root.destroy()
        main_window.root.deiconify() 

class TeacherWindow:
    def __init__(self, master):

        def enter_data():
            
            teacherName = teacher_name_entry.get()
            specialization = specialization_combobox.get()
            email = email_entry.get()
            cpf = cpf_entry.get()

            query = (f"INSERT INTO PROFESSOR (NOME, ESPECIALIZACAO, EMAIL, CPF) VALUES ('{teacherName}', '{specialization}', '{email}', '{cpf}')")

            cursor = connection.cursor()
            cursor.execute(query)
            connection.commit()
            cursor.close()

        self.root = master

        frame = tk.Frame(self.root)
        frame.pack()

        # Teacher Info
        teacher_info_frame = tk.LabelFrame(frame, text = "Cadastro Curso")
        teacher_info_frame.grid(row = 1, column = 0, padx = 20, pady = 10)

        teacher_name_label = tk.Label(teacher_info_frame, text = "Nome ")
        teacher_name_entry = tk.Entry(teacher_info_frame, width = 25)

        teacher_name_label.grid(row = 0, column = 0)
        teacher_name_entry.grid(row = 1, column = 0)

        specialization_label = tk.Label(teacher_info_frame, text = "Especialização")
        specialization_combobox  = ttk.Combobox(teacher_info_frame, values = ["Especialista", "Certificate", "MBA", "MBA Executivo", "Mestrado", "Doutorado", "PhD"])

        specialization_label.grid(row = 4, column = 0)
        specialization_combobox.grid(row = 5, column = 0)

        email_label = tk.Label(teacher_info_frame, text = "Email")
        email_entry = tk.Entry(teacher_info_frame)

        email_label.grid(row = 2, column = 0)
        email_entry.grid(row = 3, column = 0)

        cpf_label = tk.Label(teacher_info_frame, text = "CPF")
        cpf_entry = tk.Entry(teacher_info_frame)

        cpf_label.grid(row = 2, column = 1)
        cpf_entry.grid(row = 3, column = 1)

        for widget in teacher_info_frame.winfo_children():
            widget.grid_configure(padx = 5, pady = 5, sticky= "w")

        # Button 
        button_back = tk.Button(frame, text = "Voltar", command = self.back_to_main_window)
        button_back.grid(row = 2, column = 0,  sticky="w", padx = 20, pady = 10)

        button_register = tk.Button(frame, text = "Cadastrar", command = enter_data)
        button_register.grid(row = 2, column = 0, sticky = "e", padx = 20, pady = 10)

        self.root.protocol("WM_DELETE_WINDOW", self.on_close)

    def on_close(self):
        self.root.destroy()
        main_window.root.deiconify()

    def back_to_main_window(self):
        self.root.destroy()
        main_window.root.deiconify()

root = tk.Tk()
root.config(background="#1D3759")
main_window = MainWindow(root)
root.mainloop()