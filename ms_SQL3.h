//---------------------------------------------------------------------------

#ifndef ms_SQL3H
#define ms_SQL3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TLabel *Label2;
	TMemo *Memo1;
	TLabel *Label3;
	TMemo *Memo2;
	TLabel *Label4;
	TMemo *Memo3;
	TMemo *Memo4;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
