	@ data/maps/MtPyre_6F/scripts.inc:30 MtPyre_6F_Text_ValerieIntro (+1 aliases)
	.globl gText_Rom_216A00
gText_Rom_216A00: @ 0x08216A00
	.string "ここに いると……\nなにかの ちからが はいってくるの……{EOS}"
	.if (. - gText_Rom_216A00) > 0x1e
	.error "gText_Rom_216A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216A00) < 0x1e
	.space 0x1e - (. - gText_Rom_216A00)
	.endif
