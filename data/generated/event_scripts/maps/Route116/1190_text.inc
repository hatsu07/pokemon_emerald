	@ data/maps/Route116/scripts.inc:452 Route116_Text_TunnelersRestHouse
	.globl gText_Rom_1EC35D
gText_Rom_1EC35D: @ 0x081EC35D
	.string "トンネルこうじ さぎょういん つめしょ{EOS}"
	.if (. - gText_Rom_1EC35D) > 0x14
	.error "gText_Rom_1EC35D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC35D) < 0x14
	.space 0x14 - (. - gText_Rom_1EC35D)
	.endif
