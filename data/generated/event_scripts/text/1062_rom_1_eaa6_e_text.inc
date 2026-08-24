	@ field-script:0x1EA50D FieldScriptText_1EAA22
	.globl gText_Rom_1EAA22
gText_Rom_1EAA22: @ 0x081EAA22
	.string "つよいわよー！\nこのひと　すっごく　つよいわよー！{EOS}"
	.if (. - gText_Rom_1EAA22) > 0x1a
	.error "gText_Rom_1EAA22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA22) < 0x1a
	.space 0x1a - (. - gText_Rom_1EAA22)
	.endif
	@ field-script:0x1EA549 FieldScriptText_1EAA3C
	.globl gText_Rom_1EAA3C
gText_Rom_1EAA3C: @ 0x081EAA3C
	.string "ママより　つよいなんて　すごーい！\pでも　あたし　だって　つよいんだから！\nほんと　なんだってば！{EOS}"
	.if (. - gText_Rom_1EAA3C) > 0x32
	.error "gText_Rom_1EAA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA3C) < 0x32
	.space 0x32 - (. - gText_Rom_1EAA3C)
	.endif

	@ trainerbattle-cfg:0x1EA54F TrainerBattleText_1EAA6E
	.globl gText_Rom_1EAA6E
gText_Rom_1EAA6E: @ 0x081EAA6E
	.string "えっ　もしかして　まけちゃった……{EOS}"
	.if (. - gText_Rom_1EAA6E) > 0x12
	.error "gText_Rom_1EAA6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA6E) < 0x12
	.space 0x12 - (. - gText_Rom_1EAA6E)
	.endif
