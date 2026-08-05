	@ field-script:0x1EC45D FieldScriptText_1EC79A
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EC79A
gText_Rom_1EC79A: @ 0x081EC79A
	.string "ここは　117ばん　どうろ\n{ESCAPE}{0x02}　シダケタウン$"
	.if (. - gText_Rom_1EC79A) != 0x19
	.error "gText_Rom_1EC79A must retain its original byte length"
	.endif
