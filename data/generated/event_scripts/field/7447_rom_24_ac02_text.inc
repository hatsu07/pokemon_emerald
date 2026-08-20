	@ field-script:0x2490D2 FieldScriptText_24AC02
	.globl gText_Rom_24AC02
gText_Rom_24AC02: @ 0x0824AC02
	.string "かいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！{EOS}"
	.if (. - gText_Rom_24AC02) > 0x25
	.error "gText_Rom_24AC02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC02) < 0x25
	.space 0x25 - (. - gText_Rom_24AC02)
	.endif
