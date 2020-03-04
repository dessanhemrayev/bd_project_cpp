object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090#1099' '#1087#1086#1080#1089#1082#1072
  ClientHeight = 419
  ClientWidth = 684
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
  object Tablisa1: TStringGrid
    Left = 8
    Top = 8
    Width = 665
    Height = 329
    DefaultColWidth = 130
    FixedCols = 0
    GradientEndColor = clSilver
    GradientStartColor = clSilver
    GridLineWidth = 2
    TabOrder = 0
  end
  object Button1: TButton
    Left = 312
    Top = 368
    Width = 75
    Height = 25
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 1
    OnClick = Button1Click
  end
  object PrintDialog1: TPrintDialog
    Left = 96
    Top = 368
  end
  object PrinterSetupDialog1: TPrinterSetupDialog
    Left = 160
    Top = 368
  end
end
