	@ data/text/trainers.inc:2642 Route124_Text_LilaDefeat (+1 aliases)
	.globl gText_Rom_2603B4
gText_Rom_2603B4: @ 0x082603B4
	.string "カコ『コウの せいで まけたのよ!\nあとで おしおき だかんね!!{EOS}"
	.if (. - gText_Rom_2603B4) > 0x22
	.error "gText_Rom_2603B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2603B4) < 0x22
	.space 0x22 - (. - gText_Rom_2603B4)
	.endif
