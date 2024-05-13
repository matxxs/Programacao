from tkinter import *


class Application:
    def __init__(self, master = None):
        
        self.containerMain = Frame(master)
        #self.containerMain["pady"] = 20
        self.containerMain.pack()

        self.msg = Label(
            self.containerMain, text = "Cadastrar",
            font = ("Arial", "11", "bold"),
            padx = 5, pady= 10)  
        self.msg.pack()

        self.containerRegister = Frame(self.containerMain)
        self.containerRegister["pady"] = 30
        self.containerRegister.pack()

        self.context_nameUser = Frame(self.containerRegister)
        self.context_nameUser.pack()
        self.msg = Label(self.context_nameUser, text = "Nome")
        self.msg.pack(side = LEFT)

        self.nameUser =  Entry(self.context_nameUser)
        self.nameUser["width"] = 30
        self.nameUser.pack(side = RIGHT)

        self.context_Age = Frame(self.containerRegister)
        self.context_Age.pack()
        self.msg = Label(self.context_Age, text = "Idade")
        self.msg.pack(side = LEFT)

        self.ageUser =  Entry(self.context_Age)
        self.ageUser["width"] = 30
        self.ageUser.pack(side = RIGHT)

        self.context_City = Frame(self.containerRegister)
        self.context_City.pack()
        self.msg = Label(self.context_City, text = "Cidade")
        self.msg.pack(side = LEFT)

        self.cityUser =  Entry(self.context_City)
        self.cityUser["width"] = 30
        self.cityUser.pack(side = RIGHT)

        self.container_button = Frame(self.containerRegister)
        self.container_button["pady"] = 30
        self.container_button.pack()
        self.context_button = Button(self.container_button, 
            text = "REGISTRAR USUARIO",
            font = ("Arial", "11", "bold"),
            width = 20)
        self.context_button.bind("<Button-1>", self.Regiter)
        self.context_button.pack()

        self.PrintName = Label(self.containerMain, text = "" )
        self.PrintAge = Label(self.containerMain, text = "" )
        self.PrintCity = Label(self.containerMain, text = "" )

        self.PrintName.pack()
        self.PrintAge.pack()
        self.PrintCity.pack()
        

    def Regiter(self, evento0):
        
        name = self.nameUser.get()
        age =  self.ageUser.get()
        city = self.cityUser.get()

        self.PrintName["text"] = name
        self.PrintAge["text"] = age
        self.PrintCity["text"] = city
      
root = Tk()
root.title("Cadastro de Usúarios")
Application(root)
root.mainloop()