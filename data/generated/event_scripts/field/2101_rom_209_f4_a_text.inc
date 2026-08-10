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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08209F66: @ 0x08209F66
	.byte 0x00
EventScript_JP_08209F67: @ 0x08209F67
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209F83 @ gText_Rom_209F83
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08209F70: @ 0x08209F70
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013D
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209FCF @ gText_Rom_209FCF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
