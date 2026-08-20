	@ data/text/trainers.inc:3176 Route131_Text_ReliPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_261992
gText_Rom_261992: @ 0x08261992
	.string "アミ『キナギの にんげんは\nうまれた ときから\lうみと ポケモンと いっしょ なんだ{EOS}"
	.if (. - gText_Rom_261992) != 0x2b
	.error "gText_Rom_261992 must retain its original byte length"
	.endif
