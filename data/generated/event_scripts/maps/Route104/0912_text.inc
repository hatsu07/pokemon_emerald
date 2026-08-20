	@ data/maps/Route104/scripts.inc:1158 Route104_Text_BrendanDefeat (+2 aliases)
	.globl gText_Rom_1E812B
gText_Rom_1E812B: @ 0x081E812B
	.string "へえ……\nなかなか やるじゃないか{EOS}"
	.if (. - gText_Rom_1E812B) > 0x12
	.error "gText_Rom_1E812B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E812B) < 0x12
	.space 0x12 - (. - gText_Rom_1E812B)
	.endif
