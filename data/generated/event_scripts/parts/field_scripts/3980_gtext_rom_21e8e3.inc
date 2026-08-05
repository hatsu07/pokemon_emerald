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
