	@ data/text/trainers.inc:28 Route102_Text_AllenDefeated (+1 aliases)
	.globl gText_Rom_25965C
gText_Rom_25965C: @ 0x0825965C
	.string "かてると おもったから\nこえを かけたのに!"
	.byte EOS
	.if (. - gText_Rom_25965C) > 0x17
	.error "gText_Rom_25965C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25965C) < 0x17
	.space 0x17 - (. - gText_Rom_25965C)
	.endif
