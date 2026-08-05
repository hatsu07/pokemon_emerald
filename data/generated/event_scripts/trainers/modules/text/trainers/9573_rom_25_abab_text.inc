	@ data/text/trainers.inc:512 Route108_Text_JeromePostBattle
	.globl gText_Rom_25ABAB
gText_Rom_25ABAB: @ 0x0825ABAB
	.string "うみの ポケモンと あそぶことも\nおよいでいる ときの たのしみだね!$"
	.if (. - gText_Rom_25ABAB) > 0x24
	.error "gText_Rom_25ABAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABAB) < 0x24
	.space 0x24 - (. - gText_Rom_25ABAB)
	.endif
