	@ src/battle_message.c:224 battle_message_line_224
	.globl gText_Rom_5A98D7
gText_Rom_5A98D7: @ 0x085A98D7
	.string "{B_DEF_NAME_WITH_PREFIX}から\nたいりょくを すいとった!{EOS}"
	.if (. - gText_Rom_5A98D7) > 0x13
	.error "gText_Rom_5A98D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98D7) < 0x13
	.space 0x13 - (. - gText_Rom_5A98D7)
	.endif
	@ analyzed canonical ROM range 0x085A98EA-0x085A990B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x11, 0x1A, 0xFE, 0x24, 0x09, 0x45, 0x2D, 0x05, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x13, 0x19
	.byte 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x11, 0x1A, 0x00, 0x24, 0x09, 0x45, 0x2D, 0x05, 0x50, 0x10
	.byte 0xAB, 0xFF
	.globl gText_Rom_5A990C
gText_Rom_5A990C: @ 0x085A990C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやけどの ダメージを うけている！{EOS}"
	.if (. - gText_Rom_5A990C) > 0x16
	.error "gText_Rom_5A990C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A990C) < 0x16
	.space 0x16 - (. - gText_Rom_5A990C)
	.endif
	@ analyzed canonical ROM range 0x085A9922-0x085A9930
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x24, 0x09, 0x45, 0x2D, 0x00, 0x05, 0x50
