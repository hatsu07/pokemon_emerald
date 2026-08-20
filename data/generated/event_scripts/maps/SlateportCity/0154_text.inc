	@ data/maps/SlateportCity/scripts.inc:1326 SlateportCity_Text_RegisteredScott
	.globl gText_Rom_1DD8C6
gText_Rom_1DD8C6: @ 0x081DD8C6
	.string "エニシダ という ひとを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1DD8C6) > 0x1c
	.error "gText_Rom_1DD8C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD8C6) < 0x1c
	.space 0x1c - (. - gText_Rom_1DD8C6)
	.endif
