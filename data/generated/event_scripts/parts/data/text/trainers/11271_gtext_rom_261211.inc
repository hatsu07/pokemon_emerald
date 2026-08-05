	@ data/text/trainers.inc:2987 Route128_Text_IsaiahRematchIntro (+1 aliases)
	.globl gText_Rom_261211
gText_Rom_261211: @ 0x08261211
	.string "まだまだ げんき ですからね\nサイユウシティ めざして およぎますよ!$"
	.if (. - gText_Rom_261211) > 0x24
	.error "gText_Rom_261211 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261211) < 0x24
	.space 0x24 - (. - gText_Rom_261211)
	.endif
