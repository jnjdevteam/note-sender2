object Form1: TForm1
  Left = 269
  Top = 124
  Width = 574
  Height = 232
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object TreeView1: TTreeView
    Left = 24
    Top = 16
    Width = 145
    Height = 97
    Indent = 19
    PopupMenu = PopupMenu1
    TabOrder = 0
    Items.Data = {
      010000001D0000000000000000000000FFFFFFFFFFFFFFFF0000000002000000
      04C4A3B1B81D0000000000000000000000FFFFFFFFFFFFFFFF00000000000000
      0004C7D0B9CE1D0000000000000000000000FFFFFFFFFFFFFFFF000000000000
      000004B9CEB1D4}
  end
  object PopupMenu1: TPopupMenu
    Left = 200
    Top = 16
    object N1: TMenuItem
      Caption = #52828#44396#52628#44032
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #52828#44396#49325#51228
      OnClick = N2Click
    end
    object N3: TMenuItem
      Caption = #51901#51648#48372#45236#44592
      OnClick = N3Click
    end
    object N4: TMenuItem
      Caption = #45824#54868#54616#44592
      OnClick = N4Click
    end
  end
end
