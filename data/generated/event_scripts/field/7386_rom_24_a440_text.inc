	@ field-script:0x249B19 FieldScriptText_24A440
	.globl gText_Rom_24A440
gText_Rom_24A440: @ 0x0824A440
	.string "しょうひんと　して\nこの　リボンを　おうけとり　ください！$"
	.if (. - gText_Rom_24A440) > 0x1e
	.error "gText_Rom_24A440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A440) < 0x1e
	.space 0x1e - (. - gText_Rom_24A440)
	.endif
