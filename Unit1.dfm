object Form1: TForm1
  Left = 376
  Top = 83
  Cursor = crHandPoint
  BorderStyle = bsSingle
  Caption = #1040#1074#1090#1086#1088#1080#1079#1072#1094#1080#1103
  ClientHeight = 335
  ClientWidth = 263
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 43
    Top = 96
    Width = 30
    Height = 13
    Caption = #1051#1086#1075#1080#1085
  end
  object Label2: TLabel
    Left = 43
    Top = 131
    Width = 31
    Height = 13
    Caption = #1055#1072#1088#1086#1083
  end
  object Button1: TButton
    Left = 88
    Top = 208
    Width = 75
    Height = 25
    Caption = #1042#1086#1081#1090#1080
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 80
    Top = 93
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 80
    Top = 128
    Width = 121
    Height = 21
    PasswordChar = '*'
    TabOrder = 2
  end
  object Button2: TButton
    Left = 236
    Top = 8
    Width = 19
    Height = 25
    Caption = '?'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 30000
    OnTimer = Timer1Timer
    Left = 120
    Top = 272
  end
end
