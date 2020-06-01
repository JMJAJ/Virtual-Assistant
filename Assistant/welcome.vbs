Set Sapi = Wscript.CreateObject("SAPI.SpVoice")
Dim objShell
Set objShell = WScript.CreateObject( "WScript.Shell" )

Sapi.speak "Hello, I am virtual assistant, can I help you ?"
