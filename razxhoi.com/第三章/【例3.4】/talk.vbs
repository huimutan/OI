Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "你好","你也好，主人"
CommandDictionary.Add "你是谁？","我是魔法学院语音小精灵"
CommandDictionary.Add "可以帮我吗","主人，请讲"
CommandDictionary.Add "我想学魔法","推荐《算法竞赛宝典》三部曲"
CommandDictionary.Add "魔法好学吗","只要努力和坚持，你一定可以的"
CommandDictionary.Add "墨老师呢","他今天不在魔法学院"
CommandDictionary.Add "谁在学院？","楚继光、张琪曼，李旭琳"
CommandDictionary.Add "我想学数学","推荐《小学奥数一本通》"
CommandDictionary.Add "你真聪明","谢谢你，说得我都不好意思了"
CommandDictionary.Add "从哪开始学呢","C++三维图形化编程是最好的入门方法"
CommandDictionary.Add "你会说英语吗","yes,I can speak English."
CommandDictionary.Add "你会编程吗","我正在学习，总有一天我会做到"
CommandDictionary.Add "我们可以做朋友吗","当然可以了"
CommandDictionary.Add "谢谢你","不客气，这是我应该做的"
CommandDictionary.Add "再见","欢迎再来"
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
