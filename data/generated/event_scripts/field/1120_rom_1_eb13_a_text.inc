	@ field-script:0x1EAF3E FieldScriptText_1EB13A
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB13A
gText_Rom_1EB13A: @ 0x081EB13A
	.string "ここは　112ばん　どうろ\n{ESCAPE}{0x02}　フエンタウン{EOS}"
	.if (. - gText_Rom_1EB13A) != 0x19
	.error "gText_Rom_1EB13A must retain its original byte length"
	.endif
