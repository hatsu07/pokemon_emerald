	@ data/text/trainers.inc:1103 Route112_Text_TrentDefeat (+1 aliases)
	.globl gText_Rom_25C352
gText_Rom_25C352: @ 0x0825C352
	.string "あ……\nあしが つった……$"
	.if (. - gText_Rom_25C352) > 0xe
	.error "gText_Rom_25C352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C352) < 0xe
	.space 0xe - (. - gText_Rom_25C352)
	.endif
