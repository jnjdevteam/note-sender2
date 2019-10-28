object Form3: TForm3
  Left = 680
  Top = 311
  Width = 395
  Height = 299
  Caption = 'Form3'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 24
    Top = 16
    Width = 265
    Height = 169
    ImeName = 'Microsoft Office IME 2007'
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 288
    Top = 208
    Width = 73
    Height = 33
    Caption = #45803#44592
    TabOrder = 1
    OnClick = Button1Click
  end
  object NMUDP2: TNMUDP
    RemoteHost = '127.0.0.1'
    RemotePort = 2000
    LocalPort = 1000
    ReportLevel = 1
    OnDataReceived = NMUDP2DataReceived
    Left = 304
    Top = 24
  end
end
