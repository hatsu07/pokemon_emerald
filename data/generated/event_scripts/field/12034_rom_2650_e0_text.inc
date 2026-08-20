	@ field-script:0x264900 FieldScriptText_2650E0
	.globl gText_Rom_2650E0
gText_Rom_2650E0: @ 0x082650E0
	.string "わーい！　やったー！\pさっそく　たべさせて　みよーっと！{EOS}"
	.if (. - gText_Rom_2650E0) > 0x1d
	.error "gText_Rom_2650E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650E0) < 0x1d
	.space 0x1d - (. - gText_Rom_2650E0)
	.endif
