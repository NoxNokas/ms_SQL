object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 331
  ClientWidth = 345
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
end
