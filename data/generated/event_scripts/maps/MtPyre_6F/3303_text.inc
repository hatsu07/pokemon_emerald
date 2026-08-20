	@ data/maps/MtPyre_6F/scripts.inc:47 MtPyre_6F_Text_ValerieRematchIntro (+1 aliases)
	.globl gText_Rom_216A9E
gText_Rom_216A9E: @ 0x08216A9E
	.string "あなたの うしろ……\nなにが いるの……?{EOS}"
	.if (. - gText_Rom_216A9E) > 0x16
	.error "gText_Rom_216A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216A9E) < 0x16
	.space 0x16 - (. - gText_Rom_216A9E)
	.endif
