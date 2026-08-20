	@ data/maps/Route121/scripts.inc:171 Route121_Text_OkayMoveOutToMtPyre
	.globl gText_Rom_1EE337
gText_Rom_1EE337: @ 0x081EE337
	.string "よし!\nおれたちも おくりびやまに むかうぞ!{EOS}"
	.if (. - gText_Rom_1EE337) > 0x18
	.error "gText_Rom_1EE337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE337) < 0x18
	.space 0x18 - (. - gText_Rom_1EE337)
	.endif
