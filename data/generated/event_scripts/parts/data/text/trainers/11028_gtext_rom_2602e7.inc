	@ data/text/trainers.inc:2627 Route124_Text_GracePostBattle
	.globl gText_Rom_2602E7
gText_Rom_2602E7: @ 0x082602E7
	.string "ずっと がんばって きたことが\nあなたの つよさなのね……!$"
	.if (. - gText_Rom_2602E7) > 0x1f
	.error "gText_Rom_2602E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2602E7) < 0x1f
	.space 0x1f - (. - gText_Rom_2602E7)
	.endif
