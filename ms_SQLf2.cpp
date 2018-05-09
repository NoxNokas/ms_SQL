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
	Form2->RadioGroup2->Visible = false;   //Показывает/Скрывает страны для пляжного отдыха
	Form2->RadioGroup3->Visible = false;  //Показывает/Скрывает страны для  экскурсионного отдыха
	Form2->RadioGroup4->Visible = false;  //Показывает/Скрывает страны для  горнолыжного отдыха
	Form2->RadioGroup5->Visible = false;  //Показывает/Скрывает страны для  оздоровительного отдыха

	Form2->RadioGroup6->Visible = false;   // регионы для пляжного отдыха в турции
	Form2->RadioGroup7->Visible = false;   // регионы для пляжного отдыха в россии
	Form2->RadioGroup8->Visible = false;   // регионы для пляжного отдыха в греции

	Form2->RadioGroup9->Visible = false;   // регионы для экскурсионного отдыха в чехии
	Form2->RadioGroup10->Visible = false;  // регионы для экскурсионного отдыха в германии
	Form2->RadioGroup11->Visible = false;  // регионы для экскурсионного отдыха во франции

	Form2->RadioGroup12->Visible = false;  // регионы для горнолыжного отдыха в швейцарии
	Form2->RadioGroup13->Visible = false;  // регионы для горнолыжного отдыха в австрии
	Form2->RadioGroup14->Visible = false;  // регионы для горнолыжного отдыха во франции

	Form2->RadioGroup15->Visible = false;  // регионы для оздоровительного отдыха в россии
	Form2->RadioGroup16->Visible = false;  // регионы для оздоровительного отдыха в грузии
	Form2->RadioGroup17->Visible = false;  // регионы для оздоровительного отдыха в китае

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
//Условия для выбора типа отдыха--------------------------ТИП ОТДЫХА---------
if (RadioGroup1->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup2->Visible =true;   // пляжный
	RadioGroup2->Enabled = true;
	type_of_rest = "Пляжный";
	Label1->Caption = "Пляжный -> ";
//	Form2->Visible=false;
//	Form3->Show();
}
if (RadioGroup1->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup3->Visible =true;
	RadioGroup3->Enabled = true;
	type_of_rest = "Экскурсионный";
	Label1->Caption = "Экскурсионный -> ";
//	Form2->Visible=false;
//	Form4->Show();
}
if (RadioGroup1->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup4->Visible =true;
	RadioGroup4->Enabled = true;
	type_of_rest = "Горнолыжный";
	Label1->Caption = "Горнолыжный -> ";
//	Form2->Visible=false;
//	Form5->Show();
}
if (RadioGroup1->ItemIndex == 3)
{
	showRadioGroup ();
	RadioGroup5->Visible =true;
	RadioGroup5->Enabled = true;
	type_of_rest = "Оздоровительный";
	Label1->Caption = "Оздоровительный -> ";
//	Form2->Visible=false;
//	Form6->Show();
}
//Условия выбора страны для пляжного типа отдыха-------------СТРАНЫ----------
if (RadioGroup2->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup6->Visible =true;
	RadioGroup6->Enabled = true;
	country = "Турция";
	Label1->Caption = "Пляжный -> Турция -> ";
}
if (RadioGroup2->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup7->Visible =true;
	RadioGroup7->Enabled = true;
	country = "Россия";
	Label1->Caption = "Пляжный -> Россия -> ";
}
if (RadioGroup2->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup8->Visible =true;
	RadioGroup8->Enabled = true;
	country = "Греция";
	Label1->Caption = "Пляжный -> Греция -> ";
}
//Условия выбора страны для экскурсионного типа отдыха
if (RadioGroup3->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup9->Visible =true;
	RadioGroup9->Enabled = true;
	country = "Чехия";
	Label1->Caption = "Экскурсионный -> Чехия -> ";
}
if (RadioGroup3->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup10->Visible =true;
	RadioGroup10->Enabled = true;
	country = "Германия";
	Label1->Caption = "Экскурсионный -> Германия -> ";
}
if (RadioGroup3->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup11->Visible =true;
	RadioGroup11->Enabled = true;
	country = "Франция";
	Label1->Caption = "Экскурсионный -> Франция -> ";
}
//Условия выбора страны для горнолыжного типа отдыха
if (RadioGroup4->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup12->Visible =true;
	RadioGroup12->Enabled = true;
	country = "Швейцария";
	Label1->Caption = "Горнолыжный -> Швейцария -> ";
}
if (RadioGroup4->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup13->Visible =true;
	RadioGroup13->Enabled = true;
	country = "Австрия";
	Label1->Caption = "Горнолыжный -> Австрия -> ";
}
if (RadioGroup4->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup14->Visible =true;
	RadioGroup14->Enabled = true;
	country = "Франция";
	Label1->Caption = "Горнолыжный -> Франция -> ";
}
//Условия выбора страны для оздоровительного типа отдыха
if (RadioGroup5->ItemIndex == 0)
{
	showRadioGroup ();
	RadioGroup15->Visible =true;
	RadioGroup15->Enabled = true;
	country = "Россия";
	Label1->Caption = "Оздоровительный -> Россия -> ";
}
if (RadioGroup5->ItemIndex == 1)
{
	showRadioGroup ();
	RadioGroup16->Visible =true;
	RadioGroup16->Enabled = true;
	country = "Грузия";
	Label1->Caption = "Оздоровительный -> Грузия -> ";
}
if (RadioGroup5->ItemIndex == 2)
{
	showRadioGroup ();
	RadioGroup17->Visible =true;
	RadioGroup17->Enabled = true;
	country = "Китай";
	Label1->Caption = "Оздоровительный -> Китай -> ";
}
if (RadioGroup6->ItemIndex ==0)
{
	Label1->Caption = "Пляжный -> Турция -> Кемер";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup6->ItemIndex ==1)
{
	region = "Белек";
	Label1->Caption = "Пляжный -> Турция -> Белек";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup6->ItemIndex ==2)
{
	region = "Аланья";
	Label1->Caption = "Пляжный -> Турция -> Аланья";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}

if (RadioGroup7->ItemIndex ==0)
{
	region = "Крым";
	Label1->Caption = "Пляжный -> Россия -> Крым";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup7->ItemIndex ==1)
{
	region = "Сочи";
	Label1->Caption = "Пляжный -> Россия -> Сочи";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup7->ItemIndex ==2)
{
	region = "Геленджик";
	Label1->Caption = "Пляжный -> Россия -> Геленджик";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==0)
{
	region = "Родос";
	Label1->Caption = "Пляжный -> Греция -> Родос";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==1)
{
	region = "Крит";
	Label1->Caption = "Пляжный -> Греция -> Крит";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup8->ItemIndex ==2)
{
	region = "Корфу";
	Label1->Caption = "Пляжный -> Греция -> Корфу";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex ==0)
{
	
	region = "Берилин";
	Label1->Caption = "Экскурсионный -> Германия -> Берилин";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex ==1)
{
	
	region = "Франкфурт-на-Майне";
	Label1->Caption = "Экскурсионный -> Германия -> Франкфурт-на-Майне";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup9->ItemIndex == 2)
{
	
	region = "Дюссельдорф";
	Label1->Caption = "Экскурсионный -> Германия -> Дюссельдорф";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 0)
{
	
	region = "Прага";
	Label1->Caption = "Экскурсионный -> Чехия -> Прага";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 1)
{
	
	region = "Карловы Вары";
	Label1->Caption = "Экскурсионный -> Чехия -> Карловы Вары";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup10->ItemIndex == 2)
{
	
	region = "Брно";
	Label1->Caption = "Экскурсионный -> Чехия -> Брно";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 0)
{
	
	region = "Рим";
	Label1->Caption = "Экскурсионный -> Италия -> Рим";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 1)
{
	
	region = "Венеция";
	Label1->Caption = "Экскурсионный -> Италия -> Венеция";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup11->ItemIndex == 2)
{
	
	region = "Неаполь";
	Label1->Caption = "Экскурсионный -> Италия -> Неаполь";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 0)
{
	
	region = "Церматт";
	Label1->Caption = "Горнолыжный -> Швейцария -> Церматт";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 1)
{
	
	region = "Давос";
	Label1->Caption = "Горнолыжный -> Швейцария -> Давос";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup12->ItemIndex == 2)
{
	
	region = "Сент-Мориц";
	Label1->Caption = "Горнолыжный -> Швейцария -> Сент-Мориц";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 0)
{
	
	region = "Инсбрук";
	Label1->Caption = "Горнолыжный -> Австрия -> Инсбрук";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 1)
{
	
	region = "Сан-Антон";
	Label1->Caption = "Горнолыжный -> Австрия -> Сан-Антон";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup13->ItemIndex == 2)
{
	
	region = "Ишгль";
	Label1->Caption = "Горнолыжный -> Австрия -> Ишгль";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 0)
{
	
	region = "Куршевель";
	Label1->Caption = "Горнолыжный -> Франция -> Куршевель";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 1)
{
	
	region = "Шамони";
	Label1->Caption = "Горнолыжный -> Франция -> Шамони";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup14->ItemIndex == 2)
{
	
	region = "Шамрус";
	Label1->Caption = "Горнолыжный -> Франция -> Шамрус";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 0)
{
	
	region = "Кавказские Минеральные Воды";
	Label1->Caption = "Оздоровительный -> Россия -> Кавказские Минеральные Воды";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 1)
{
	
	region = "Краснодарский край";
	Label1->Caption = "Оздоровительный -> Россия -> Краснодарский край";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup15->ItemIndex == 2)
{
	
	region = "Московская область";
	Label1->Caption = "Оздоровительный -> Россия -> Московская область";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 0)
{
	
	region = "Боржоми";
	Label1->Caption = "Оздоровительный -> Грузия -> Боржоми";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 1)
{
	
	region = "Цхалтубо";
	Label1->Caption = "Оздоровительный -> Грузия -> Цхалтубо";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup16->ItemIndex == 2)
{
	
	region = "Батуми";
	Label1->Caption = "Оздоровительный -> Грузия -> Батуми";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 0)
{
	
	region = "Хайнань";
	Label1->Caption = "Оздоровительный -> Китай -> Хайнань";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 1)
{
	
	region = "Пекин";
	Label1->Caption = "Оздоровительный -> Китай -> Пекин";
	Button2->Visible = false;
	Button2->Enabled = false;
	Button4->Visible = true;
	Button4->Enabled = true;
}
if (RadioGroup17->ItemIndex == 2)
{
	
	region = "Далянь";
	Label1->Caption = "Оздоровительный -> Китай -> Далянь";
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
	Label1->Caption = "Здесь отображается ваш выбор";
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
	Form2->Visible=false;
	Form3->Show();	
}
//---------------------------------------------------------------------------

