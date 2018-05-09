object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'MAItravel'
  ClientHeight = 500
  ClientWidth = 800
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 200
    Top = 8
    Width = 420
    Height = 25
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1102' '#1086' '#1042#1072#1096#1077#1084' '#1086#1090#1077#1083#1077':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 296
    Top = 71
    Width = 135
    Height = 19
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1085#1086#1095#1077#1081
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 20
    Top = 71
    Width = 161
    Height = 19
    Caption = #1044#1072#1090#1072' '#1085#1072#1095#1072#1083#1072' '#1087#1086#1077#1079#1076#1082#1080':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 20
    Top = 167
    Width = 214
    Height = 19
    Caption = #1062#1077#1085#1086#1074#1086#1081' '#1076#1080#1072#1087#1072#1079#1086#1085' ('#1079#1072' '#1085#1086#1095#1100'):'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 344
    Top = 459
    Width = 121
    Height = 33
    Caption = #1053#1072' '#1075#1083#1072#1074#1085#1091#1102
    TabOrder = 0
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 619
    Top = 96
    Width = 145
    Height = 21
    TabOrder = 1
    Text = #1058#1080#1087' '#1087#1080#1090#1072#1085#1080#1103
    Items.Strings = (
      #1041#1077#1079' '#1087#1080#1090#1072#1085#1080#1103
      #1058#1086#1083#1100#1082#1086' '#1079#1072#1074#1090#1088#1072#1082
      #1047#1072#1074#1090#1088#1072#1082' + '#1059#1078#1080#1085
      #1055#1086#1083#1085#1099#1081' '#1087#1072#1085#1089#1080#1086#1085
      #1042#1089#1105' '#1074#1082#1083#1102#1095#1077#1085#1086)
  end
  object ComboBox2: TComboBox
    Left = 451
    Top = 96
    Width = 145
    Height = 21
    TabOrder = 2
    Text = #1059#1076#1072#1083#1077#1085#1085#1086#1089#1090#1100' '#1086#1090' '#1084#1086#1088#1103
    Items.Strings = (
      '1 '#1083#1080#1085#1080#1103
      '2 '#1083#1080#1085#1080#1103
      #1042' '#1090#1088#1072#1085#1089#1087#1086#1088#1090#1085#1086#1081' '#1076#1086#1089#1090#1091#1087#1085#1086#1089#1090#1080)
  end
  object Memo1: TMemo
    Left = 20
    Top = 96
    Width = 161
    Height = 33
    TabOrder = 3
  end
  object Memo2: TMemo
    Left = 296
    Top = 96
    Width = 57
    Height = 33
    TabOrder = 4
  end
  object Memo3: TMemo
    Left = 20
    Top = 200
    Width = 101
    Height = 25
    TabOrder = 5
  end
  object Memo4: TMemo
    Left = 134
    Top = 200
    Width = 100
    Height = 25
    TabOrder = 6
  end
  object CheckBox1: TCheckBox
    Left = 20
    Top = 280
    Width = 109
    Height = 17
    Caption = #1057' '#1076#1077#1090#1100#1084#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object CheckBox2: TCheckBox
    Left = 20
    Top = 303
    Width = 141
    Height = 18
    Caption = #1057' '#1078#1080#1074#1086#1090#1085#1099#1084#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object Button2: TButton
    Left = 619
    Top = 459
    Width = 121
    Height = 33
    Caption = #1044#1072#1083#1077#1077
    TabOrder = 9
    OnClick = Button2Click
  end
end
