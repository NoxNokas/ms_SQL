object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 331
  ClientWidth = 644
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
    Left = 142
    Top = 8
    Width = 365
    Height = 25
    HelpType = htKeyword
    Caption = #1050#1072#1082#1086#1081' '#1086#1090#1076#1099#1093' '#1042#1099' '#1087#1088#1077#1076#1087#1086#1095#1080#1090#1072#1077#1090#1077'?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 8
    Top = 294
    Width = 105
    Height = 33
    Caption = #1043#1083#1072#1074#1085#1072#1103
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 531
    Top = 290
    Width = 105
    Height = 33
    Caption = #1044#1072#1083#1077#1077
    TabOrder = 1
    OnClick = Button2Click
  end
  object RadioGroup1: TRadioGroup
    Left = 142
    Top = 39
    Width = 365
    Height = 194
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Items.Strings = (
      #1055#1083#1103#1078#1085#1099#1081
      #1069#1082#1089#1082#1091#1088#1089#1080#1074#1085#1099#1081
      #1043#1086#1088#1085#1086#1083#1099#1078#1085#1099#1081
      #1054#1079#1076#1086#1088#1086#1074#1080#1090#1077#1083#1100#1085#1099#1081)
    ParentFont = False
    TabOrder = 2
  end
end
