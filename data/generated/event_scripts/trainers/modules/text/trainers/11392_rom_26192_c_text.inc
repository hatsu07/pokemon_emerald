	@ data/text/trainers.inc:3167 Route131_Text_KaraPostBattle
	.globl gText_Rom_26192C
gText_Rom_26192C: @ 0x0826192C
	.string "みんな ビキニを みてるんじゃなくて\nわたしの びぼうが げんいん かしら……?{EOS}"
	.if (. - gText_Rom_26192C) > 0x29
	.error "gText_Rom_26192C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26192C) < 0x29
	.space 0x29 - (. - gText_Rom_26192C)
	.endif
