Dim CommandDictionary   
Dim WshShell   
Dim ScriptComplete   
Dim SR  
Dim Grammar  
Set CommandDictionary = CreateObject("Scripting.Dictionary")   
CommandDictionary.Add "���","��Ҳ�ã�����"
CommandDictionary.Add "����˭��","����ħ��ѧԺ����С����"
CommandDictionary.Add "���԰�����","���ˣ��뽲"
CommandDictionary.Add "����ѧħ��","�Ƽ����㷨�������䡷������"
CommandDictionary.Add "ħ����ѧ��","ֻҪŬ���ͼ�֣���һ�����Ե�"
CommandDictionary.Add "ī��ʦ��","�����첻��ħ��ѧԺ"
CommandDictionary.Add "˭��ѧԺ��","���̹⡢��������������"
CommandDictionary.Add "����ѧ��ѧ","�Ƽ���Сѧ����һ��ͨ��"
CommandDictionary.Add "�������","лл�㣬˵���Ҷ�������˼��"
CommandDictionary.Add "���Ŀ�ʼѧ��","C++��άͼ�λ��������õ����ŷ���"
CommandDictionary.Add "���˵Ӣ����","yes,I can speak English."
CommandDictionary.Add "�������","������ѧϰ������һ���һ�����"
CommandDictionary.Add "���ǿ�����������","��Ȼ������"
CommandDictionary.Add "лл��","��������������Ӧ������"
CommandDictionary.Add "�ټ�","��ӭ����"
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
