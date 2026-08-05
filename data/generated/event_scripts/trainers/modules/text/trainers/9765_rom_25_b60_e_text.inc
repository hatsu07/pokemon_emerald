	@ data/text/trainers.inc:791 Route110_Text_JasmineDefeated (+1 aliases)
	.globl gText_Rom_25B60E
gText_Rom_25B60E: @ 0x0825B60E
	.string "きんにくつうが しんぱいだわ……$"
	.if (. - gText_Rom_25B60E) > 0x11
	.error "gText_Rom_25B60E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B60E) < 0x11
	.space 0x11 - (. - gText_Rom_25B60E)
	.endif
