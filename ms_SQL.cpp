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
Form2->Label1->Caption="Checked"; //���������� � Form2, ���� RadioButton Checked
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
	Form2->Label1->Caption="sdccsdcsdcsked";
}
//---------------------------------------------------------------------------


