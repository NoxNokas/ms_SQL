//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "ms_SQLf2.h"
#include "ms_SQL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Visible=false;
	Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
Form2->Label1->Caption="Checked"; //Обращаемся к Form2, если RadioButton Checked
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
	Form2->Label1->Caption="sdccsdcsdcsked";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N3Click(TObject *Sender)
{
	Form1->WindowState = wsMinimized;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
	Form1->WindowState = wsMaximized;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N6Click(TObject *Sender)
{
    Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
	Form1->WindowState = wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
	ShowMessage(" ");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
	ShowMessage("Дмитрий Рогов\nАнтон Тароянц\nПолина Александрова\nАльберт Халгатян");
}
//---------------------------------------------------------------------------

