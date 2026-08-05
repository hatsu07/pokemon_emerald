	@ field-script:0x235BF6 FieldScriptText_236597
	.globl gText_Rom_236597
gText_Rom_236597: @ 0x08236597
	.string "おきゃくさま……\nそれいじょう　もつことは　できません……"
	.byte EOS
	.if (. - gText_Rom_236597) > 0x1e
	.error "gText_Rom_236597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236597) < 0x1e
	.space 0x1e - (. - gText_Rom_236597)
	.endif
