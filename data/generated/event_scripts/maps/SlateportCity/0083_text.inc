	@ data/maps/SlateportCity/scripts.inc:1130 SlateportCity_Text_AmIOnTV
	.globl gText_Rom_1DD166
gText_Rom_1DD166: @ 0x081DD166
	.string "みんなー! みてるかー!\nおれも テレビに うつってるかー?$"
	.if (. - gText_Rom_1DD166) > 0x1f
	.error "gText_Rom_1DD166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD166) < 0x1f
	.space 0x1f - (. - gText_Rom_1DD166)
	.endif
