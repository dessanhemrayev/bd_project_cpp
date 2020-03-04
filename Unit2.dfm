object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = #1040#1091#1076#1080#1090#1086#1088#1080#1080' '#1074#1091#1079#1072
  ClientHeight = 455
  ClientWidth = 679
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DBNavigator1: TDBNavigator
    Left = 200
    Top = 312
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 0
  end
  object Button1: TButton
    Left = 472
    Top = 313
    Width = 75
    Height = 25
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072
    TabOrder = 1
    OnClick = Button1Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 80
    Width = 657
    Height = 218
    DataSource = DataSource1
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button2: TButton
    Left = 553
    Top = 313
    Width = 112
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1091
    TabOrder = 3
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 264
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object Button3: TButton
    Left = 391
    Top = 38
    Width = 75
    Height = 25
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 5
    OnClick = Button3Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 681
    Height = 457
    Color = clSilver
    ParentBackground = False
    TabOrder = 6
    object Button4: TButton
      Left = 24
      Top = 16
      Width = 75
      Height = 25
      Caption = #1054#1090#1082#1088#1099#1090#1100
      TabOrder = 0
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 105
      Top = 16
      Width = 75
      Height = 25
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      TabOrder = 1
      OnClick = Button5Click
    end
    object Tablisa1: TStringGrid
      Left = 8
      Top = 47
      Width = 665
      Height = 242
      DefaultColWidth = 130
      FixedCols = 0
      GradientEndColor = clSilver
      GradientStartColor = clSilver
      GridLineWidth = 2
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goTabs]
      TabOrder = 2
    end
    object Button6: TButton
      Left = 376
      Top = 304
      Width = 75
      Height = 25
      Caption = #1053#1072#1081#1090#1080
      TabOrder = 3
      OnClick = Button6Click
    end
    object Edit2: TEdit
      Left = 249
      Top = 304
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object Button7: TButton
      Left = 472
      Top = 304
      Width = 75
      Height = 25
      Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 5
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 8
      Top = 295
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      OnClick = Button8Click
    end
    object Panel2: TPanel
      Left = 1
      Top = 0
      Width = 681
      Height = 457
      TabOrder = 7
      object RadioButton1: TRadioButton
        Left = 272
        Top = 182
        Width = 144
        Height = 17
        Caption = #1056#1072#1073#1086#1090#1072' '#1089' '#1073#1072#1079#1072#1084#1080' '#1076#1072#1085#1085#1099#1093' '
        TabOrder = 0
        OnClick = RadioButton1Click
      end
      object RadioButton2: TRadioButton
        Left = 272
        Top = 205
        Width = 144
        Height = 17
        Caption = #1056#1072#1073#1086#1090#1072' '#1089' '#1084#1072#1089#1089#1080#1074#1086#1084' '#1089#1090#1088#1086#1082
        TabOrder = 1
        OnClick = RadioButton2Click
      end
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 592
    Top = 408
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=lab_W' +
      'UZ.mdb;Mode=Share Deny None;Persist Security Info=False;Jet OLED' +
      'B:System database="";Jet OLEDB:Registry Path="";Jet OLEDB:Databa' +
      'se Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Lockin' +
      'g Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bu' +
      'lk Transactions=1;Jet OLEDB:New Database Password="";Jet OLEDB:C' +
      'reate System Database=False;Jet OLEDB:Encrypt Database=False;Jet' +
      ' OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact With' +
      'out Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 520
    Top = 400
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Laboratory'
    Left = 448
    Top = 408
  end
end
