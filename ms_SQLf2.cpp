//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>
#include "ms_SQL.h"
#include "ms_SQLf2.h"
#include "ms_SQL3.h"
#include "ms_SQL4.h"
#include "ms_SQL5.h"
#include "ms_SQL6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
void showRadioGroup ();
std::string type_of_rest, country, region;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	showRadioGroup ();
	RadioGroup1->Visible = true;
	RadioGroup1->Enabled = true;
}
//---------------------------------------------------------------------------
void showRadioGroup ()
{
	Form2->RadioGroup1->Visible = false;
	Form2->RadioGroup2->Visible = false;   //����������/�������� ������ ��� �������� ������
	Form2->RadioGroup3->Visible = false;  //����������/�������� ������ ���  �������������� ������
	Form2->RadioGroup4->Visible = false;  //����������/�������� ������ ���  ������������ ������
	Form2->RadioGroup5->Visible = false;  //����������/�������� ������ ���  ���������������� ������

	Form2->RadioGroup6->Visible = false;   // ������� ��� �������� ������ � ������
	Form2->RadioGroup7->Visible = false;   // ������� ��� �������� ������ � ������
	Form2->RadioGroup8->Visible = false;   // ������� ��� �������� ������ � ������

	Form2->RadioGroup9->Visible = false;   // ������� ��� �������������� ������ � �����
	Form2->RadioGroup10->Visible = false;  // ������� ��� �������������� ������ � ��������
	Form2->RadioGroup11->Visible = false;  // ������� ��� �������������� ������ �� �������

	Form2->RadioGroup12->Visible = false;  // ������� ��� ������������ ������ � ���������
	Form2->RadioGroup13->Visible = false;  // ������� ��� ������������ ������ � �������
	Form2->RadioGroup14->Visible = false;  // ������� ��� ������������ ������ �� �������

	Form2->RadioGroup15->Visible = false;  // ������� ��� ���������������� ������ � ������
	Form2->RadioGroup16->Visible = false;  // ������� ��� ���������������� ������ � ������
	Form2->RadioGroup17->Visible = false;  // ������� ��� ���������������� ������ � �����

	Form2->RadioGroup1->Enabled = false;
	Form2->RadioGroup2->Enabled = false;
	Form2->RadioGroup3->Enabled = false;
	Form2->RadioGroup4->Enabled = false;
	Form2->RadioGroup5->Enabled = false;

	Form2->RadioGroup6->Enabled = false;
	Form2->RadioGroup7->Enabled = false;
	Form2->RadioGroup8->Enabled = false;

	Form2->RadioGroup9->Enabled = false;
	Form2->RadioGroup10->Enabled = false;
	Form2->RadioGroup11->Enabled = false;

	Form2->RadioGroup12->Enabled = false;
	Form2->RadioGroup13->Enabled = false;
	Form2->RadioGroup14->Enabled = false;

	Form2->RadioGroup15->Enabled = false;
	Form2->RadioGroup16->Enabled = false;
	Form2->RadioGroup17->Enabled = false;
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
//������� ��� ������ ���� ������--------------------------��� ������---------
if (RadioGroup1->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup2->Visible =true;   // �������
	RadioGroup2->Enabled = true;
	type_of_rest = "�������";
	Label1->Caption = "������� -> ";
//	Form2->Visible=false;
//	Form3->Show();
}
if (RadioGroup1->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup3->Visible =true;
	RadioGroup3->Enabled = true;
	type_of_rest = "�������������";
	Label1->Caption = "������������� -> ";
//	Form2->Visible=false;
//	Form4->Show();
}
if (RadioGroup1->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup4->Visible =true;
	RadioGroup4->Enabled = true;
	type_of_rest = "�����������";
	Label1->Caption = "����������� -> ";
//	Form2->Visible=false;
//	Form5->Show();
}
if (RadioGroup1->ItemIndex == 3)
{
	showRadioGroup ();
	RadioGroup5->Visible =true;
	RadioGroup5->Enabled = true;
	type_of_rest = "���������������";
	Label1->Caption = "��������������� -> ";
//	Form2->Visible=false;
//	Form6->Show();
}
//������� ������ ������ ��� �������� ���� ������-------------������----------
if (RadioGroup2->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup6->Visible =true;
	RadioGroup6->Enabled = true;
	country = "������";
	Label1->Caption = "������� -> ������ -> ";
}
if (RadioGroup2->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup7->Visible =true;
	RadioGroup7->Enabled = true;
	country = "������";
	Label1->Caption = "������� -> ������ -> ";
}
if (RadioGroup2->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup8->Visible =true;
	RadioGroup8->Enabled = true;
	country = "������";
	Label1->Caption = "������� -> ������ -> ";
}
//������� ������ ������ ��� �������������� ���� ������
if (RadioGroup3->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup9->Visible =true;
	RadioGroup9->Enabled = true;
	country = "�����";
	Label1->Caption = "������������� -> ����� -> ";
}
if (RadioGroup3->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup10->Visible =true;
	RadioGroup10->Enabled = true;
	country = "��������";
	Label1->Caption = "������������� -> �������� -> ";
}
if (RadioGroup3->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup11->Visible =true;
	RadioGroup11->Enabled = true;
	country = "�������";
	Label1->Caption = "������������� -> ������� -> ";
}
//������� ������ ������ ��� ������������ ���� ������
if (RadioGroup4->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup12->Visible =true;
	RadioGroup12->Enabled = true;
	country = "���������";
	Label1->Caption = "����������� -> ��������� -> ";
}
if (RadioGroup4->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup13->Visible =true;
	RadioGroup13->Enabled = true;
	country = "�������";
	Label1->Caption = "����������� -> ������� -> ";
}
if (RadioGroup4->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup14->Visible =true;
	RadioGroup14->Enabled = true;
	country = "�������";
	Label1->Caption = "����������� -> ������� -> ";
}
//������� ������ ������ ��� ���������������� ���� ������
if (RadioGroup5->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup15->Visible =true;
	RadioGroup15->Enabled = true;
	country = "������";
	Label1->Caption = "��������������� -> ������ -> ";
}
if (RadioGroup5->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup16->Visible =true;
	RadioGroup16->Enabled = true;
	country = "������";
	Label1->Caption = "��������������� -> ������ -> ";
}
if (RadioGroup5->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup17->Visible =true;
	RadioGroup17->Enabled = true;
	country = "�����";
	Label1->Caption = "��������������� -> ����� -> ";
}
if (RadioGroup6->ItemIndex ==0)
{
	Label1->Caption = "������� -> ������ -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup6->ItemIndex ==1)
{
	region = "�����";
	Label1->Caption = "������� -> ������ -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup6->ItemIndex ==2)
{
	region = "������";
	Label1->Caption = "������� -> ������ -> ������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}

if (RadioGroup7->ItemIndex ==0)
{
	region = "����";
	Label1->Caption = "������� -> ������ -> ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup7->ItemIndex ==1)
{
	region = "����";
	Label1->Caption = "������� -> ������ -> ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup7->ItemIndex ==2)
{
	region = "���������";
	Label1->Caption = "������� -> ������ -> ���������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==0)
{
	region = "�����";
	Label1->Caption = "������� -> ������ -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==1)
{
	region = "����";
	Label1->Caption = "������� -> ������ -> ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==2)
{
	region = "�����";
	Label1->Caption = "������� -> ������ -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex ==0)
{
	
	region = "�������";
	Label1->Caption = "������������� -> �������� -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex ==1)
{
	
	region = "���������-��-�����";
	Label1->Caption = "������������� -> �������� -> ���������-��-�����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex == 2)
{
	
	region = "�����������";
	Label1->Caption = "������������� -> �������� -> �����������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 0)
{
	
	region = "�����";
	Label1->Caption = "������������� -> ����� -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 1)
{
	
	region = "������� ����";
	Label1->Caption = "������������� -> ����� -> ������� ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 2)
{
	
	region = "����";
	Label1->Caption = "������������� -> ����� -> ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 0)
{
	
	region = "���";
	Label1->Caption = "������������� -> ������ -> ���";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 1)
{
	
	region = "�������";
	Label1->Caption = "������������� -> ������ -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 2)
{
	
	region = "�������";
	Label1->Caption = "������������� -> ������ -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 0)
{
	
	region = "�������";
	Label1->Caption = "����������� -> ��������� -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 1)
{
	
	region = "�����";
	Label1->Caption = "����������� -> ��������� -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 2)
{
	
	region = "����-�����";
	Label1->Caption = "����������� -> ��������� -> ����-�����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 0)
{
	
	region = "�������";
	Label1->Caption = "����������� -> ������� -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 1)
{
	
	region = "���-�����";
	Label1->Caption = "����������� -> ������� -> ���-�����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 2)
{
	
	region = "�����";
	Label1->Caption = "����������� -> ������� -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 0)
{
	
	region = "���������";
	Label1->Caption = "����������� -> ������� -> ���������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 1)
{
	
	region = "������";
	Label1->Caption = "����������� -> ������� -> ������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 2)
{
	
	region = "������";
	Label1->Caption = "����������� -> ������� -> ������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 0)
{
	
	region = "���������� ����������� ����";
	Label1->Caption = "��������������� -> ������ -> ���������� ����������� ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 1)
{
	
	region = "������������� ����";
	Label1->Caption = "��������������� -> ������ -> ������������� ����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 2)
{
	
	region = "���������� �������";
	Label1->Caption = "��������������� -> ������ -> ���������� �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 0)
{
	
	region = "�������";
	Label1->Caption = "��������������� -> ������ -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 1)
{
	
	region = "��������";
	Label1->Caption = "��������������� -> ������ -> ��������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 2)
{
	
	region = "������";
	Label1->Caption = "��������������� -> ������ -> ������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 0)
{
	
	region = "�������";
	Label1->Caption = "��������������� -> ����� -> �������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 1)
{
	
	region = "�����";
	Label1->Caption = "��������������� -> ����� -> �����";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 2)
{
	
	region = "������";
	Label1->Caption = "��������������� -> ����� -> ������";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	RadioGroup1->ItemIndex = -1;
	RadioGroup2->ItemIndex = -1;
	RadioGroup3->ItemIndex = -1;
	RadioGroup4->ItemIndex = -1;
	RadioGroup5->ItemIndex = -1;
	RadioGroup6->ItemIndex = -1;
	RadioGroup7->ItemIndex = -1;
	RadioGroup8->ItemIndex = -1;
	RadioGroup9->ItemIndex = -1;
	RadioGroup10->ItemIndex = -1;
	RadioGroup11->ItemIndex = -1;
	RadioGroup12->ItemIndex = -1;
	RadioGroup13->ItemIndex = -1;
	RadioGroup14->ItemIndex = -1;
	RadioGroup15->ItemIndex = -1;
	RadioGroup16->ItemIndex = -1;
	RadioGroup17->ItemIndex = -1;
	showRadioGroup ();
	RadioGroup1->Visible =true;
	RadioGroup1->Enabled = true;
	Button2->Visible = true;
	Button2->Enabled = true;
	Button4->Visible = false;
	Button4->Enabled = false;
	Label1->Caption = "����� ������������ ��� �����";
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
	Form2->Visible=false;
	Form3->Show();	
}
//---------------------------------------------------------------------------

