	@ data/text/trainers.inc:3251 Route132_Text_MakaylaDefeat (+1 aliases)
	.globl gText_Rom_261CD0
gText_Rom_261CD0: @ 0x08261CD0
	.string "あら やっぱり ダメかね{EOS}"
	.if (. - gText_Rom_261CD0) > 0xd
	.error "gText_Rom_261CD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261CD0) < 0xd
	.space 0xd - (. - gText_Rom_261CD0)
	.endif
