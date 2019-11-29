Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "我要写作","winword.exe"
CommandDictionary.Add "我要做幻灯片","powerpnt.exe"
Set WshShell = CreateObject("WScript.Shell")   
ScriptComplete = False   
Set SR = WScript.CreateObject("SAPI.SpSharedRecoContext", "RecoContext_")   
Set Grammar = SR.CreateGrammar   
Grammar.CmdLoadFromFile "do.xml", SLODynamic   
Grammar.CmdSetRuleIdState 0, 1   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "主人，请点击麦克风按钮，我将执行您的命令"   
Do   
WScript.Sleep 1000   
Loop Until ScriptComplete   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "再见，主人，请关闭语音识别系统"  
Sub RecoContext_Recognition(ByVal StreamNumber,ByVal StreamPosition,ByVal RecognitionType,ByVal Result )   
Text = Result.PhraseInfo.GetText   
If Text <> "再见" Then   
  WshShell.Run CommandDictionary.Item(Text) 
Else  
  ScriptComplete = true   
End If   
End Sub   
