	@ data/maps/MtPyre_6F/scripts.inc:62 MtPyre_6F_Text_CedricDefeat (+1 aliases)
	.globl gText_Rom_216B06
gText_Rom_216B06: @ 0x08216B06
	.string "まいご じゃ なかったか?{EOS}"
	.if (. - gText_Rom_216B06) > 0xe
	.error "gText_Rom_216B06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216B06) < 0xe
	.space 0xe - (. - gText_Rom_216B06)
	.endif
