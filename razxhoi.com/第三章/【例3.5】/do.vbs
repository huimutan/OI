Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "ϵͳ�汾","winver"
CommandDictionary.Add "д�ְ�","write"
CommandDictionary.Add "��ͼ��","mspaint"
CommandDictionary.Add "���±�","notepad"
CommandDictionary.Add "������","calc"
CommandDictionary.Add "��Ҫ����","iexplore"
CommandDictionary.Add "��Ҫ����","iexplore http://www.razxhoi.com"
Set WshShell = CreateObject("WScript.Shell")   
ScriptComplete = False   
Set SR = WScript.CreateObject("SAPI.SpSharedRecoContext", "RecoContext_")   
Set Grammar = SR.CreateGrammar   
Grammar.CmdLoadFromFile "do.xml", SLODynamic   
Grammar.CmdSetRuleIdState 0, 1   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "���ˣ�������˷簴ť���ҽ�ִ����������"   
Do   
WScript.Sleep 1000   
Loop Until ScriptComplete   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "�ټ������ˣ���ر�����ʶ��ϵͳ"  
Sub RecoContext_Recognition(ByVal StreamNumber,ByVal StreamPosition,ByVal RecognitionType,ByVal Result )   
Text = Result.PhraseInfo.GetText   
If Text <> "�ټ�" Then   
  WshShell.Run CommandDictionary.Item(Text) 
Else  
  ScriptComplete = true   
End If   
End Sub   
