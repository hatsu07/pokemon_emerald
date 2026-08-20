	@ data/maps/FortreeCity_House4/scripts.inc:71 FortreeCity_House4_Text_AskedWingullToRunErrand
	.globl gText_Rom_2052A3
gText_Rom_2052A3: @ 0x082052A3
	.string "えへへ キャモメに\nちょっと おつかいを たのんだのさ{EOS}"
	.if (. - gText_Rom_2052A3) > 0x1c
	.error "gText_Rom_2052A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052A3) < 0x1c
	.space 0x1c - (. - gText_Rom_2052A3)
	.endif
