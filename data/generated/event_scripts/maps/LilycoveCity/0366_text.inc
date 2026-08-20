	@ data/maps/LilycoveCity/scripts.inc:488 LilycoveCity_Text_BrendanNoConfidence
	.globl gText_Rom_1E0A1B
gText_Rom_1E0A1B: @ 0x081E0A1B
	.string "ユウキ『なんだよ\nじしんが ないのかよ{EOS}"
	.if (. - gText_Rom_1E0A1B) > 0x14
	.error "gText_Rom_1E0A1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0A1B) < 0x14
	.space 0x14 - (. - gText_Rom_1E0A1B)
	.endif
