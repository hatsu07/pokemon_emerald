	@ data/maps/EverGrandeCity_PhoebesRoom/scripts.inc:64 EverGrandeCity_PhoebesRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_2104AB
gText_Rom_2104AB: @ 0x082104AB
	.string "あーあ\nまけちゃった{EOS}"
	.if (. - gText_Rom_2104AB) > 0xb
	.error "gText_Rom_2104AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2104AB) < 0xb
	.space 0xb - (. - gText_Rom_2104AB)
	.endif
