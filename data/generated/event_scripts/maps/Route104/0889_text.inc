	@ data/maps/Route104/scripts.inc:1104 Route104_Text_MayLetsBattle (+1 aliases)
	.globl gText_Rom_1E7F41
gText_Rom_1E7F41: @ 0x081E7F41
	.string "ハルカ『どう? あたしと ここで\nちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1E7F41) > 0x21
	.error "gText_Rom_1E7F41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F41) < 0x21
	.space 0x21 - (. - gText_Rom_1E7F41)
	.endif
