import tkinter, threading, PythonTester

class MyGui():

    def __init__(self):
        self.root=tkinter.Tk()
        self.root.title("Control center")
        self.root.mainloop()

    def draw(self):
        print ("gui")

        
        
        """self.c=tkinter.Canvas(width=800,height=600)
        self.c.create_arc(100,100,40,40,fill="red",extent=359.99)
        self.c.pack()
        self.a=4321
        root.mainloop()"""


def main():
        t = threading.Thread(target=PythonTester.main,args=(0,))
        t.start()
        g=MyGui()
        print("end")


if __name__ == '__main__':
    main()
