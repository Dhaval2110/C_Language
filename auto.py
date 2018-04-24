

from pywinauto import application
import time
app=application.Application()
app.start("Notepad.exe")
time.sleep(3)
app.Notepad.edit.TypeKeys("Hello")
time.sleep(2)
app.Notepad.MenuSelect("File->Save As")
app.SaveAs.edit.SetText("Mytrty.txt")
app.SaveAs.Save.Click()
