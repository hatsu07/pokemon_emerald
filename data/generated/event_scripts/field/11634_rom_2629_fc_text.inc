	@ field-script:0x21EA32 FieldScriptText_2629FC
	.globl gText_Rom_2629FC
gText_Rom_2629FC: @ 0x082629FC
	.string "あるき　つかれたら　ちょっと　ひといき！\n「みんなの　きゅうけいじょ」$"
	.if (. - gText_Rom_2629FC) > 0x24
	.error "gText_Rom_2629FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2629FC) < 0x24
	.space 0x24 - (. - gText_Rom_2629FC)
	.endif
