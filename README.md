# ms_SQL
ms_SQL - главная форма.
ms_SQLf2 - фрома с выбором отдыха
ms_SQL3 - 
ms_SQL4 - 
ms_SQL5 - 
ms_SQL6 - 

	Form2->RadioGroup1   //Тип отдыха          (Пляжный Экскурсионный Горнолыжный Оздоровительный)
	Form2->RadioGroup2   //(Пляжный)           (Турция, Россия, Греция)
	Form2->RadioGroup3   //(Экскурсионный)     (Чехия, Германия, Италия)
	Form2->RadioGroup4   //(Горнолыжный)       (Швейцария, Австрия, Франция)
	Form2->RadioGroup5   //(Оздоровительныый)  (Россия, Грузия, Китай)
	Form2->RadioGroup6->Visible = false;   // регионы для пляжного отдыха в турции (кемер, белек, аланья)
	Form2->RadioGroup7->Visible = false;   // регионы для пляжного отдыха в россии (крым сочи, геленджик)
	Form2->RadioGroup8->Visible = false;   // регионы для пляжного отдыха в греции (родос, крит, корфу)

	Form2->RadioGroup9->Visible = false;   // регионы для экскурсионного отдыха в чехии (прага, караловы вары, брно)
	Form2->RadioGroup10->Visible = false;  // регионы для экскурсионного отдыха в германии (Берлин, Франкфурт-Майне, Дюссельдорф)
	Form2->RadioGroup11->Visible = false;  // регионы для экскурсионного отдыха в италии (Рим, Венеция, Неаполь)

	Form2->RadioGroup12->Visible = false;  // регионы для горнолыжного отдыха в швейцарии (Церматт, Давос, Сент-Мориц)
	Form2->RadioGroup13->Visible = false;  // регионы для горнолыжного отдыха в австрии (Инсбрук, Сан-Антон, Ишгль)
	Form2->RadioGroup14->Visible = false;  // регионы для горнолыжного отдыха во франции (Куршевель, Шамони, Шамрус)

	Form2->RadioGroup15->Visible = false;  // регионы для оздоровительного отдыха в россии (Минеральные Воды, Краснодарский край, Московская область)
	Form2->RadioGroup16->Visible = false;  // регионы для оздоровительного отдыха в грузии (Батуми, Цхалтубо, Боржоми)
	Form2->RadioGroup17->Visible = false;  // регионы для оздоровительного отдыха в китае (Далянь, Пекин, Хайнань)
	
