	@ data/maps/SlateportCity/scripts.inc:1081 SlateportCity_Text_SinkOldBoats
	.globl gText_Rom_1DCF68
gText_Rom_1DCF68: @ 0x081DCF68
	.string "ふるく なって のれない ふねは\nどうするか しって いるかね?\pうみの そこに しずめて\nポケモンの すみかに してやるのだよ!{EOS}"
	.if (. - gText_Rom_1DCF68) > 0x42
	.error "gText_Rom_1DCF68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCF68) < 0x42
	.space 0x42 - (. - gText_Rom_1DCF68)
	.endif
