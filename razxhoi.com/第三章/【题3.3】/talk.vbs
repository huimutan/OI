Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "ƻ��","apple,a,p,p,l,e,apple"
CommandDictionary.Add "��","tree,t,r,e,e,tree"
CommandDictionary.Add "��","book,b,o,o,k,book"
CommandDictionary.Add "ˮ","water,w,a,t,e,r,water"
CommandDictionary.Add "ʳ��","food,f,o,o,d,food"
CommandDictionary.Add "��ʦ","teacher,t,e,a,c,h,e,r,teacher"
CommandDictionary.Add "ѧϰ","study,s,t,u,d,y,study"
CommandDictionary.Add "�����","computer,c,o,m,p,u,t,e,r,computer"
CommandDictionary.Add "Ӣ��","english,e,n,g,l,i,s,h,english"
CommandDictionary.Add "�̵�","shop,s,h,o,p,shop"
CommandDictionary.Add "�糿","morning,m,o,r,n,i,n,g,morning"
CommandDictionary.Add "ѧУ","school,s,c,h,o,o,l,school"
CommandDictionary.Add "����","friend,f,r,i,e,n,d,friend"
CommandDictionary.Add "лл","thanks,t,h,a,n,k,s,thanks"
CommandDictionary.Add "����","house,h,o,u,s,e,house"
Set WshShell = CreateObject("WScript.Shell")   
ScriptComplete = False   
Set SR = WScript.CreateObject("SAPI.SpSharedRecoContext", "RecoContext_")   
Set Grammar = SR.CreateGrammar   
Grammar.CmdLoadFromFile "x.xml", SLODynamic   
Grammar.CmdSetRuleIdState 0, 1   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "���ã����ˣ�������˷簴ť���ҽ��������ķԸ�"   
Do   
WScript.Sleep 1000   
Loop Until ScriptComplete   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "�ټ������ˣ���ر�����ʶ��ϵͳ"  
Sub RecoContext_Recognition(ByVal StreamNumber,ByVal StreamPosition,ByVal RecognitionType,ByVal Result )   
Text = Result.PhraseInfo.GetText   
If Text <> "�ټ�" Then   
  set objTTS  = createobject("sapi.spvoice")  
  objTTS.speak CommandDictionary.Item(Text)   
Else  
  ScriptComplete = true   
End If   
End Sub   
