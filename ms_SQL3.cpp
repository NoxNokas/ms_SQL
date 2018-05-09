//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ms_SQL3.h"
#include "ms_SQL.h"
#include "ms_SQL4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	Form3->Visible=false;
	Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button2Click(TObject *Sender)
{
	Form3->Visible=false;
	Form4->Show();
}
//---------------------------------------------------------------------------

