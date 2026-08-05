	@ data/text/trainers.inc:3035 Route128_Text_WayneIntro (+1 aliases)
	.globl gText_Rom_26140A
gText_Rom_26140A: @ 0x0826140A
	.string "サイユウに いってみたいから\nたきのぼりを おぼえた\lポケモンを つりあげたんだよ!$"
	.if (. - gText_Rom_26140A) > 0x2b
	.error "gText_Rom_26140A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26140A) < 0x2b
	.space 0x2b - (. - gText_Rom_26140A)
	.endif
