	@ data/maps/MtPyre_6F/scripts.inc:34 MtPyre_6F_Text_ValerieDefeat (+1 aliases)
	.globl gText_Rom_216A1E
gText_Rom_216A1E: @ 0x08216A1E
	.string "ちからが ぬけていく……{EOS}"
	.if (. - gText_Rom_216A1E) > 0xd
	.error "gText_Rom_216A1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216A1E) < 0xd
	.space 0xd - (. - gText_Rom_216A1E)
	.endif
