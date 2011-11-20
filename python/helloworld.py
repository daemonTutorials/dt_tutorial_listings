#! /usr/bin/env python
# -*- coding: utf8 -*-

import Tkinter
from Tkconstants import *

# Main
def main():
    root = Tkinter.Tk()
    root.title("Hello World")
    
    button = Tkinter.Button(root, text="Hello World!")
    button.pack()
    
    root.mainloop()
    
main()
