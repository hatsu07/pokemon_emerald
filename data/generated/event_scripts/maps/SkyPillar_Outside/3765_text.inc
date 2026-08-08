	@ data/maps/SkyPillar_Outside/scripts.inc:139 SkyPillar_Outside_Text_DoorIsClosed (+1 aliases)
	.globl gText_Rom_21BD47
gText_Rom_21BD47: @ 0x0821BD47
	.string "とびらは とざされて いる!"
	.byte EOS
	.if (. - gText_Rom_21BD47) > 0xf
	.error "gText_Rom_21BD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BD47) < 0xf
	.space 0xf - (. - gText_Rom_21BD47)
	.endif
