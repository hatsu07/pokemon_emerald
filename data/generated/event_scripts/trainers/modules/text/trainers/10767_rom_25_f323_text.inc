	@ data/text/trainers.inc:2234 Route120_Text_RileyPostBattle
	.globl gText_Rom_25F323
gText_Rom_25F323: @ 0x0825F323
	.string "ぼくたち ニンジャごっこの かくれぬの!\nこれって てづくり なんだぜ!$"
	.if (. - gText_Rom_25F323) > 0x25
	.error "gText_Rom_25F323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F323) < 0x25
	.space 0x25 - (. - gText_Rom_25F323)
	.endif
