	@ field-script:0x21E5E2 FieldScriptText_21E8A3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_21E8A3
FieldScriptText_21E8A3: @ 0x0821E8A3
	.string "ゆうがな　きゃくせんで\nせかい　いっしゅうも　よろしいけど……\pれんらくせんで　のんびり\nホウエンを　みるのも　すてき　ですわ"
	.byte EOS
	.if (. - FieldScriptText_21E8A3) != 0x40
	.error "FieldScriptText_21E8A3 must retain its original byte length"
	.endif
	@ field-script:0x21E4F6 FieldScriptText_21E8E3
	.globl FieldScriptText_21E8E3
FieldScriptText_21E8E3: @ 0x0821E8E3
	.string "わたし　あやしく　ないです！\nだから　これを　あなたに　あげます！\pべつに　だれか　から\nよこどりした　モノじゃ　ないです！\lあんしん　して　つかって　ください！"
	.byte EOS
	.if (. - FieldScriptText_21E8E3) > 0x52
	.error "FieldScriptText_21E8E3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21E8E3) < 0x52
	.space 0x52 - (. - FieldScriptText_21E8E3)
	.endif
