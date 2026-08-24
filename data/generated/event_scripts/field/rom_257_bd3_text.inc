	@ field-script:0x257772 FieldScriptText_257BC6
	.globl FieldScriptText_257BC6
FieldScriptText_257BC6: @ 0x08257BC6
	.string "だいじにそだてなさいよ！"
	.byte EOS
	.if (. - FieldScriptText_257BC6) > 0xd
	.error "FieldScriptText_257BC6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BC6) < 0xd
	.space 0xd - (. - FieldScriptText_257BC6)
	.endif
	@ field-script:0x257793 FieldScriptText_257BD3
	.globl FieldScriptText_257BD3
FieldScriptText_257BD3: @ 0x08257BD3
	.string "ところで　あんたの　{0xFD}{0x02}じゃが\pなんか　{0xFD}{0x03}とこの　{0xFD}{0x04}と\nなかよく　あそんで　おったぞ\pしかも　なにやら　メールを\nもらっておった　ようじゃ"
	.byte EOS
	.if (. - FieldScriptText_257BD3) > 0x48
	.error "FieldScriptText_257BD3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BD3) < 0x48
	.space 0x48 - (. - FieldScriptText_257BD3)
	.endif
	@ analyzed canonical ROM range 0x08257C1B-0x08257C34
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00, 0x1B, 0x07, 0x14, 0x28, 0x10, 0x02, 0x00, 0x14, 0x07, 0x1A
	.byte 0xFE, 0x46, 0x0B, 0x2E, 0x16, 0x00, 0x02, 0x50, 0x13, 0x00
