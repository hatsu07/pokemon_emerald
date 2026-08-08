	@ data/text/trainers.inc:2237 Route120_Text_CallieIntro (+1 aliases)
	.globl gText_Rom_25F348
gText_Rom_25F348: @ 0x0825F348
	.string "よそみ してると ケガするよ!$"
	.if (. - gText_Rom_25F348) > 0x10
	.error "gText_Rom_25F348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F348) < 0x10
	.space 0x10 - (. - gText_Rom_25F348)
	.endif
