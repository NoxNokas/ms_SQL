//---------------------------------------------------------------------------

#ifndef ms_SQLf2H
#define ms_SQLf2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TLabel *Label1;
	TRadioGroup *RadioGroup3;
	TRadioGroup *RadioGroup4;
	TRadioGroup *RadioGroup5;
	TRadioGroup *RadioGroup6;
	TRadioGroup *RadioGroup7;
	TRadioGroup *RadioGroup8;
	TRadioGroup *RadioGroup9;
	TRadioGroup *RadioGroup10;
	TRadioGroup *RadioGroup11;
	TRadioGroup *RadioGroup12;
	TRadioGroup *RadioGroup13;
	TRadioGroup *RadioGroup14;
	TRadioGroup *RadioGroup15;
	TRadioGroup *RadioGroup16;
	TRadioGroup *RadioGroup17;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
