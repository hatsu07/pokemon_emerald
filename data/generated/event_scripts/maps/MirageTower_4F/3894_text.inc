	@ data/maps/MirageTower_4F/scripts.inc:67 MirageTower_4F_Text_TakeClawFossil
	.globl gText_Rom_21CF16
gText_Rom_21CF16: @ 0x0821CF16
	.string "ツメのカセキを みつけた!\pこの カセキを とると\nあしもとが くずれて しまいそうだ……\pツメのカセキを とりますか?"
	.byte EOS
	.if (. - gText_Rom_21CF16) > 0x3d
	.error "gText_Rom_21CF16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CF16) < 0x3d
	.space 0x3d - (. - gText_Rom_21CF16)
	.endif
