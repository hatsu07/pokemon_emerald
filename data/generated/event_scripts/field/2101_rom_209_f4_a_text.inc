	@ field-script:0x209E5B FieldScriptText_209F4A
	.globl gText_Rom_209F4A
gText_Rom_209F4A: @ 0x08209F4A
	.string "むむ！\p{0xFD}{0x02}は　なみのりを\nわすれたくない　ようじゃ！$"
	.if (. - gText_Rom_209F4A) > 0x1c
	.error "gText_Rom_209F4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F4A) < 0x1c
	.space 0x1c - (. - gText_Rom_209F4A)
	.endif
	@ analyzed canonical ROM range 0x08209F66-0x08209F82
sAnalyzedEventData_08209F66: @ 0x08209F66
EventScript_08209F66: @ 0x08209F66
	nop
	loadword 0x00, gText_Rom_209F83
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x6A, 0x5A, 0x30, 0xA1, 0x3D, 0x01, 0x00, 0x00, 0x0F, 0x00, 0xCF, 0x9F, 0x20, 0x08, 0x09, 0x04
	.byte 0xC5, 0x6C, 0x02
