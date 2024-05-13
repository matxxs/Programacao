from tkinter import Tk
from tkinter import ttk


class Application:
    def __init__(self, master = None):
        
        style = ttk.Style()
        style.theme_use('alt')

        style.configure('TButton', font = (),
                        background = 'red'
                        )
        
        

root = Tk()
Application(root)
root.mainloop()