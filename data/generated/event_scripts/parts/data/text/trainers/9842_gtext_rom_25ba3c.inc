	@ data/text/trainers.inc:896 Route110_Text_KalebDefeated (+1 aliases)
	.globl gText_Rom_25BA3C
gText_Rom_25BA3C: @ 0x0825BA3C
	.string "きみは ちも なみだも ないんだな$"
	.if (. - gText_Rom_25BA3C) > 0x12
	.error "gText_Rom_25BA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA3C) < 0x12
	.space 0x12 - (. - gText_Rom_25BA3C)
	.endif
