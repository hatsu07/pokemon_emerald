	@ data/maps/EverGrandeCity_DrakesRoom/scripts.inc:67 EverGrandeCity_DrakesRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_210814
gText_Rom_210814: @ 0x08210814
	.string "みごと! というべきだな!{EOS}"
	.if (. - gText_Rom_210814) > 0xe
	.error "gText_Rom_210814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210814) < 0xe
	.space 0xe - (. - gText_Rom_210814)
	.endif
