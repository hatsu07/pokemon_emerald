	@ data/text/trainers.inc:3137 Route131_Text_RichardDefeat (+1 aliases)
	.globl gText_Rom_2617C3
gText_Rom_2617C3: @ 0x082617C3
	.string "トレーナーの そだてた ポケモンは\nホントに つよいなぁ……{EOS}"
	.if (. - gText_Rom_2617C3) > 0x1f
	.error "gText_Rom_2617C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2617C3) < 0x1f
	.space 0x1f - (. - gText_Rom_2617C3)
	.endif
