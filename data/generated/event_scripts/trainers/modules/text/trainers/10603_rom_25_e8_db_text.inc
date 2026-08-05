	@ data/text/trainers.inc:1994 Route119_Text_JacksonDefeat (+1 aliases)
	.globl gText_Rom_25E8DB
gText_Rom_25E8DB: @ 0x0825E8DB
	.string "ポケモンの ちしきは たらなかった……$"
	.if (. - gText_Rom_25E8DB) > 0x14
	.error "gText_Rom_25E8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8DB) < 0x14
	.space 0x14 - (. - gText_Rom_25E8DB)
	.endif
