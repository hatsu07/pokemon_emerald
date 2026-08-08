	@ data/text/trainers.inc:2621 Route124_Text_GraceIntro (+1 aliases)
	.globl gText_Rom_2602AB
gText_Rom_2602AB: @ 0x082602AB
	.string "およぐのにも あきた ところだし……\nわたしと しょうぶ しようよ!$"
	.if (. - gText_Rom_2602AB) > 0x23
	.error "gText_Rom_2602AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2602AB) < 0x23
	.space 0x23 - (. - gText_Rom_2602AB)
	.endif
