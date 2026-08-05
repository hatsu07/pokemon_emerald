	@ data/text/trainers.inc:2846 Route126_Text_PabloDefeat (+1 aliases)
	.globl gText_Rom_260C98
gText_Rom_260C98: @ 0x08260C98
	.string "おわっ つよいな\nいいね! いいね!$"
	.if (. - gText_Rom_260C98) > 0x13
	.error "gText_Rom_260C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260C98) < 0x13
	.space 0x13 - (. - gText_Rom_260C98)
	.endif
