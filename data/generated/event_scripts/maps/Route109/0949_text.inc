	@ data/maps/Route109/scripts.inc:518 Route109_Text_ZigzagoonCry
	.globl gText_Rom_1E8DB1
gText_Rom_1E8DB1: @ 0x081E8DB1
	.string "ジグザグマ『ぐぐ?{EOS}"
	.if (. - gText_Rom_1E8DB1) > 0xa
	.error "gText_Rom_1E8DB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8DB1) < 0xa
	.space 0xa - (. - gText_Rom_1E8DB1)
	.endif
