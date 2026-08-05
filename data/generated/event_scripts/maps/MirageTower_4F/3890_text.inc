	@ data/maps/MirageTower_4F/scripts.inc:61 MirageTower_4F_Text_TakeRootFossil
	.globl gText_Rom_21CEBE
gText_Rom_21CEBE: @ 0x0821CEBE
	.string "ねっこのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pねっこのカセキを とりますか?"
	.byte EOS
	.if (. - gText_Rom_21CEBE) > 0x3f
	.error "gText_Rom_21CEBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CEBE) < 0x3f
	.space 0x3f - (. - gText_Rom_21CEBE)
	.endif
