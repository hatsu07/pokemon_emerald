	@ data/text/trainers.inc:3317 Route133_Text_WarrenPostBattle
	.globl gText_Rom_261F3F
gText_Rom_261F3F: @ 0x08261F3F
	.string "ひとと おなじこと するより\nじぶんの したいこと したほうが\lたのしいに きまってるだろ!$"
	.if (. - gText_Rom_261F3F) > 0x2f
	.error "gText_Rom_261F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F3F) < 0x2f
	.space 0x2f - (. - gText_Rom_261F3F)
	.endif
