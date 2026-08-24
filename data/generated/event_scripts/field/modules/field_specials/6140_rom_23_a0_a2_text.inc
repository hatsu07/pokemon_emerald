	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A049
gText_Rom_23A049: @ 0x0823A049
	.string "ねている　てきに\nあたえた　ダメージの\nはんぶんを　かいふく"
	.byte EOS
	.if (. - gText_Rom_23A049) != 0x1f
	.error "gText_Rom_23A049 must retain its original byte length"
	.endif
	.globl gText_Rom_23A063
	.set gText_Rom_23A063, gText_Rom_23A049 + 0x1a
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A068
gText_Rom_23A068: @ 0x0823A068
	.string "ものすごい　ちからを\nこめた　パンチで\nてきを　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A068) != 0x1d
	.error "gText_Rom_23A068 must retain its original byte length"
	.endif
	.globl gText_Rom_23A080
	.set gText_Rom_23A080, gText_Rom_23A068 + 0x18
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A085
gText_Rom_23A085: @ 0x0823A085
	.string "ものすごい　ちからを\nこめた　キックで\nてきを　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A085) != 0x1d
	.error "gText_Rom_23A085 must retain its original byte length"
	.endif
	.globl gText_Rom_23A09D
	.set gText_Rom_23A09D, gText_Rom_23A085 + 0x18
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A0A2
gText_Rom_23A0A2: @ 0x0823A0A2
	.string "たおれこみ　こうげき\nてきを　まひ　させる\nことが　ある"
	.byte EOS
	.if (. - gText_Rom_23A0A2) > 0x1d
	.error "gText_Rom_23A0A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A0A2) < 0x1d
	.space 0x1d - (. - gText_Rom_23A0A2)
	.endif
