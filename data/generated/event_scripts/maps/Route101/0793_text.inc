	@ data/maps/Route101/scripts.inc:259 Route101_Text_HelpMe
	.globl gText_Rom_1E668B
gText_Rom_1E668B: @ 0x081E668B
	.string "たっ たすけて くれーっ!!$"
	.if (. - gText_Rom_1E668B) > 0xf
	.error "gText_Rom_1E668B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E668B) < 0xf
	.space 0xf - (. - gText_Rom_1E668B)
	.endif
