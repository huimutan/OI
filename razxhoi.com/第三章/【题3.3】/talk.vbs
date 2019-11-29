Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "苹果","apple,a,p,p,l,e,apple"
CommandDictionary.Add "树","tree,t,r,e,e,tree"
CommandDictionary.Add "书","book,b,o,o,k,book"
CommandDictionary.Add "水","water,w,a,t,e,r,water"
CommandDictionary.Add "食物","food,f,o,o,d,food"
CommandDictionary.Add "老师","teacher,t,e,a,c,h,e,r,teacher"
CommandDictionary.Add "学习","study,s,t,u,d,y,study"
CommandDictionary.Add "计算机","computer,c,o,m,p,u,t,e,r,computer"
CommandDictionary.Add "英语","english,e,n,g,l,i,s,h,english"
CommandDictionary.Add "商店","shop,s,h,o,p,shop"
CommandDictionary.Add "早晨","morning,m,o,r,n,i,n,g,morning"
CommandDictionary.Add "学校","school,s,c,h,o,o,l,school"
CommandDictionary.Add "朋友","friend,f,r,i,e,n,d,friend"
CommandDictionary.Add "谢谢","thanks,t,h,a,n,k,s,thanks"
CommandDictionary.Add "房子","house,h,o,u,s,e,house"
Set WshShell = CreateObject("WScript.Shell")   
ScriptComplete = False   
Set SR = WScript.CreateObject("SAPI.SpSharedRecoContext", "RecoContext_")   
Set Grammar = SR.CreateGrammar   
Grammar.CmdLoadFromFile "x.xml", SLODynamic   
Grammar.CmdSetRuleIdState 0, 1   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "您好，主人，请点击麦克风按钮，我将聆听您的吩咐"   
Do   
WScript.Sleep 1000   
Loop Until ScriptComplete   
set objTTS  = createobject("sapi.spvoice")  
objTTS.speak "再见，主人，请关闭语音识别系统"  
Sub RecoContext_Recognition(ByVal StreamNumber,ByVal StreamPosition,ByVal RecognitionType,ByVal Result )   
Text = Result.PhraseInfo.GetText   
If Text <> "再见" Then   
  set objTTS  = createobject("sapi.spvoice")  
  objTTS.speak CommandDictionary.Item(Text)   
Else  
  ScriptComplete = true   
End If   
End Sub   
