	@ data/text/trainers.inc:2363 Route121_Text_CaleDefeat (+1 aliases)
	.globl gText_Rom_25F862
gText_Rom_25F862: @ 0x0825F862
	.string "そりゃ まけますよ\nりょうてが ふさがってるんだもん$"
	.if (. - gText_Rom_25F862) > 0x1b
	.error "gText_Rom_25F862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F862) < 0x1b
	.space 0x1b - (. - gText_Rom_25F862)
	.endif
