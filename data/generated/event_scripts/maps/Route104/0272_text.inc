	@ data/maps/Route104/scripts.inc:1104 Route104_Text_MayLetsBattle (+1 aliases)
	.globl gText_Rom_1DF84F
gText_Rom_1DF84F: @ 0x081DF84F
	.string "ハルカ『どう? あたしと ここで\nちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1DF84F) > 0x21
	.error "gText_Rom_1DF84F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF84F) < 0x21
	.space 0x21 - (. - gText_Rom_1DF84F)
	.endif
