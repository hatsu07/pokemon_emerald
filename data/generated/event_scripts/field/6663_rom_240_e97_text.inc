	@ field-script:0x240A82 FieldScriptText_240E97
	.globl gText_Rom_240E97
gText_Rom_240E97: @ 0x08240E97
	.string "せっかく　かざんばいを　あつめたのに\nほしい　ものは　ないのかね　ペコペコ……{EOS}"
	.if (. - gText_Rom_240E97) > 0x28
	.error "gText_Rom_240E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E97) < 0x28
	.space 0x28 - (. - gText_Rom_240E97)
	.endif
