	@ field-script:0x209E5B FieldScriptText_209F4A
	.globl gText_Rom_209F4A
gText_Rom_209F4A: @ 0x08209F4A
	.string "むむ！\p{0xFD}{0x02}は　なみのりを\nわすれたくない　ようじゃ！{EOS}"
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
.globl EventScript_JP_08209F67
EventScript_JP_08209F67: @ 0x08209F67
	loadword 0x00, gText_Rom_209F83
	callstd 0x02
	end
.globl EventScript_JP_08209F70
EventScript_JP_08209F70: @ 0x08209F70
	lock
	faceplayer
	waitse
	playmoncry 0x013D, 0x0000
	loadword 0x00, gText_Rom_209FCF
	callstd 0x04
	waitmoncry
	release
	end
