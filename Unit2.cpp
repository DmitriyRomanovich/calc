//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
float a,b,c;
char k;
void __fastcall TForm2::Button7Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"1";
Edit2->Text=Edit2->Text+"1";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button8Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"2";
Edit2->Text=Edit2->Text+"2";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button9Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"3";
Edit2->Text=Edit2->Text+"3";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"4";
Edit2->Text=Edit2->Text+"4";
b=StrToInt(Edit1->Text);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"5";
Edit2->Text=Edit2->Text+"5";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button6Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"6";
Edit2->Text=Edit2->Text+"6";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"7";
Edit2->Text=Edit2->Text+"7";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"8";
Edit2->Text=Edit2->Text+"8";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

Edit1->Text=Edit1->Text+"9";
Edit2->Text=Edit2->Text+"9";
b=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button12Click(TObject *Sender)
{
Edit2->Text=Edit1->Text+"+";
a=StrToInt(Edit1->Text);
k='+';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button11Click(TObject *Sender)
{
Edit2->Text=Edit1->Text+"-";
a=StrToInt(Edit1->Text);
k='-';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button13Click(TObject *Sender)
{
Edit2->Text=Edit1->Text+"*";
a=StrToInt(Edit1->Text);
k='*';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button14Click(TObject *Sender)
{
Edit2->Text=Edit1->Text+"/";
a=StrToInt(Edit1->Text);
k='/';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button16Click(TObject *Sender)
{
if (b==0){

Edit1->Text="Google";

}
switch(k){
	case '+':a=a+b;
			 Edit1->Text=CurrToStr(a);break;
	case '-':a=a-b;
			 Edit1->Text=CurrToStr(a);break;
	case '*':a=a*b;
			 Edit1->Text=CurrToStr(a);break;
	case '/':a=a/b;
			  Edit1->Text=CurrToStr(a);break;
  }
  Edit2->Text=Edit2->Text+"="+Edit1->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button15Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button10Click(TObject *Sender)
{
Edit1->Text=Edit1->Text+"0";
Edit2->Text=Edit2->Text+"0";
b=StrToInt(Edit1->Text);

}
//---------------------------------------------------------------------------
