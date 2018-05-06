//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "ms_SQL.h"
#include "ms_SQLf2.h"
#include "ms_SQL3.h"
#include "ms_SQL4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form2->Visible=false;
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
if (RadioGroup1->ItemIndex == 0)
{
	Form2->Visible=false;
	Form3->Show();
}
if (RadioGroup1->ItemIndex == 1)
{
	Form2->Visible=false;
	Form4->Show();
}
if (RadioGroup1->ItemIndex == 2)
{
	Form2->Visible=false;
	Form5->Show();
}
if (RadioGroup1->ItemIndex == 3)
{
	Form2->Visible=false;
	Form6->Show();
}
}
//---------------------------------------------------------------------------

