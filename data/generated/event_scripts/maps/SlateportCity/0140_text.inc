	@ data/maps/SlateportCity/scripts.inc:1285 SlateportCity_Text_DontHaveEnoughBerryPowder
	.globl gText_Rom_1DD753
gText_Rom_1DD753: @ 0x081DD753
	.string "あれま!?\nこなが たりない じゃないの!{EOS}"
	.if (. - gText_Rom_1DD753) > 0x16
	.error "gText_Rom_1DD753 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD753) < 0x16
	.space 0x16 - (. - gText_Rom_1DD753)
	.endif
