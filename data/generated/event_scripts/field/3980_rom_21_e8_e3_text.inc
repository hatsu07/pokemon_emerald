	@ field-script:0x21E5E2 FieldScriptText_21E8A3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21E8A3
gText_Rom_21E8A3: @ 0x0821E8A3
	.string "ゆうがな　きゃくせんで\nせかい　いっしゅうも　よろしいけど……\pれんらくせんで　のんびり\nホウエンを　みるのも　すてき　ですわ"
	.byte EOS
	.if (. - gText_Rom_21E8A3) != 0x40
	.error "gText_Rom_21E8A3 must retain its original byte length"
	.endif
	.globl gText_Rom_21E8DF
	.set gText_Rom_21E8DF, gText_Rom_21E8A3 + 0x3c
	@ field-script:0x21E4F6 FieldScriptText_21E8E3
	.globl gText_Rom_21E8E3
gText_Rom_21E8E3: @ 0x0821E8E3
	.string "わたし　あやしく　ないです！\nだから　これを　あなたに　あげます！\pべつに　だれか　から\nよこどりした　モノじゃ　ないです！\lあんしん　して　つかって　ください！"
	.byte EOS
	.if (. - gText_Rom_21E8E3) > 0x52
	.error "gText_Rom_21E8E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E8E3) < 0x52
	.space 0x52 - (. - gText_Rom_21E8E3)
	.endif
