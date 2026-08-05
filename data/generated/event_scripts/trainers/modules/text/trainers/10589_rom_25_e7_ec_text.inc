	@ data/text/trainers.inc:1973 Route119_Text_GregIntro (+1 aliases)
	.globl gText_Rom_25E7EC
gText_Rom_25E7EC: @ 0x0825E7EC
	.string "ボクが だれなのか わからないだろう?\p……まあ ボクも キミのこと しらないから\nこうして たたかうんだけどね!$"
	.if (. - gText_Rom_25E7EC) > 0x3a
	.error "gText_Rom_25E7EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7EC) < 0x3a
	.space 0x3a - (. - gText_Rom_25E7EC)
	.endif
