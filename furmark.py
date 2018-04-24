#furmark

from pywinauto.application import Application

import sys
import os

def furmark():
   # app=os.system("furmark.exe")
    app = Application().Start(cmd_line=u'"C:\\Program Files (x86)\\Geeks3D\\Benchmarks\\FurMark\\FurMark.exe" ')
    window = app.Dialog
    window.Wait('ready')
    edit = window.Edit4
    edit.ClickInput()
    combobox = window.ComboBox2
    combobox.Select(u'1920x1080')
    button = window.Button9
    button.ClickInput()
    button.ClickInput()


furmark()
#app.kill()
