	@ field-script:0x22359A FieldScriptText_2237C1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2237C1
gText_Rom_2237C1: @ 0x082237C1
	.string "パートナーさがし\nおつかれさまでした！\pそれでは　マルチ　バトルルームへ\nおつれいたします{EOS}"
	.if (. - gText_Rom_2237C1) != 0x2e
	.error "gText_Rom_2237C1 must retain its original byte length"
	.endif
