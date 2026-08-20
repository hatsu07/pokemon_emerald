	@ data/maps/SeafloorCavern_Room9/scripts.inc:254 SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty
	.globl gText_Rom_218FB7
gText_Rom_218FB7: @ 0x08218FB7
	.string "アオギリ『な なんだと!?\nかってな ことを いわないでくれ!\pおまえら マグマだんこそ グラードンを\nおこらせて しまった じゃないか!\pおれは この べにいろのたまさえ あれば\nカイオーガを コントロール できるはず……\pできる はず なんだ……{EOS}"
	.if (. - gText_Rom_218FB7) > 0x7e
	.error "gText_Rom_218FB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218FB7) < 0x7e
	.space 0x7e - (. - gText_Rom_218FB7)
	.endif
