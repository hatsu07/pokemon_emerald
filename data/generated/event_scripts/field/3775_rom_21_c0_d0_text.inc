	@ field-script:0x21C07D FieldScriptText_21C0D0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21C0D0
gText_Rom_21C0D0: @ 0x0821C0D0
	.string "めを　さました　レックウザは\nどこかへ　とんで　いって　しまった……"
	.byte EOS
	.if (. - gText_Rom_21C0D0) != 0x23
	.error "gText_Rom_21C0D0 must retain its original byte length"
	.endif
