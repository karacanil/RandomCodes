# GUI practice
from tkinter import *

def show_entry_fields():
    print('Username: %s\nPassword: %s'%(username.get(),password.get()))

master=Tk()
Label(master, text="Username").grid(row=0)
Label(master, text="Password").grid(row=1)

username = Entry(master)
password = Entry(master)

username.grid(row=0, column=1)
password.grid(row=1, column=1)

Button(master, text='Quit', command=master.quit).grid(row=3, column=0, sticky=W, pady=4)
Button(master, text='Login', command=show_entry_fields).grid(row=3, column=1, sticky=W, pady=4)

master.title("Bank App")
master.geometry("400x400")
mainloop()
