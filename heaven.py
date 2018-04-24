
import sys
import os
import pyautogui
from pywinauto.application import Application
import win32api, win32con

def heaven():
    #os.system("heaven.bat")
    Application().Start("C:\Program Files (x86)\Unigine\Heaven Benchmark 4.0\heaven.bat")
    #pyautogui.position()
    #pyautogui.click(950,520)
    
#def click(x,y):
   # win32api.SetCursorPos((x,y))
    #win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,x,y,0,0)
    #win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,x,y,0,0)

heaven()
pyautogui.click(x=950,y=520)
#click(950,520)
