	@ data/text/trainers.inc:3419 Route134_Text_HudsonIntro (+1 aliases)
	.globl gText_Rom_26233C
gText_Rom_26233C: @ 0x0826233C
	.string "なあ このへんで\nもうひとり ふなのりを みなかった?{EOS}"
	.if (. - gText_Rom_26233C) > 0x1c
	.error "gText_Rom_26233C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26233C) < 0x1c
	.space 0x1c - (. - gText_Rom_26233C)
	.endif
