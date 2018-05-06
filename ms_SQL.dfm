object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 365
  ClientWidth = 405
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 80
    Top = 205
    Width = 161
    Height = 25
    Caption = #1042#1099#1073#1086#1088' '#1086#1090#1076#1099#1093#1072
    TabOrder = 0
    OnClick = Button1Click
  end
  object RadioButton1: TRadioButton
    Left = 16
    Top = 223
    Width = 17
    Height = 17
    TabOrder = 1
    OnClick = RadioButton1Click
  end
  object RadioButton2: TRadioButton
    Left = 39
    Top = 223
    Width = 17
    Height = 17
    TabOrder = 2
    OnClick = RadioButton2Click
  end
  object BitBtn1: TBitBtn
    Left = 80
    Top = 298
    Width = 161
    Height = 25
    Kind = bkClose
    NumGlyphs = 2
    TabOrder = 3
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=exp1;Data Source=DESKTOP-R0LPVM2\SQLEXP' +
      'RESS'
    Provider = 'SQLOLEDB.1'
    Left = 40
    Top = 16
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 128
    Top = 16
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 192
    Top = 16
  end
  object SQLDataSet1: TSQLDataSet
    DataSource = DataSource1
    Params = <>
    Left = 264
    Top = 16
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 192
    Top = 72
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 128
    Top = 72
  end
  object MainMenu1: TMainMenu
    Left = 312
    Top = 296
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N3: TMenuItem
        Caption = #1057#1074#1077#1088#1085#1091#1090#1100
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = #1056#1072#1079#1074#1077#1088#1085#1091#1090#1100
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1057#1090#1072#1085#1076#1072#1088#1090#1085#1086#1077' '#1086#1082#1085#1086
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1047#1072#1082#1088#1099#1090#1100
        OnClick = N6Click
      end
    end
    object N2: TMenuItem
      Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      object N7: TMenuItem
        Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N7Click
      end
      object N8: TMenuItem
        Caption = #1056#1072#1079#1088#1072#1073#1086#1090#1095#1080#1082#1080
        OnClick = N8Click
      end
    end
  end
end
