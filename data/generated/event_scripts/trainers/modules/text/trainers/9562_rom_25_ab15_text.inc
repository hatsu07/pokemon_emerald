	@ data/text/trainers.inc:497 Route107_Text_CamronIntro (+1 aliases)
	.globl gText_Rom_25AB15
gText_Rom_25AB15: @ 0x0825AB15
	.string "トライアスロンの とちゅう だが\nぜんぜん つかれて いないぜ!$"
	.if (. - gText_Rom_25AB15) > 0x21
	.error "gText_Rom_25AB15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB15) < 0x21
	.space 0x21 - (. - gText_Rom_25AB15)
	.endif
