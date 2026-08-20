	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBB99
gText_Rom_5CBB99: @ 0x085CBB99
	.string "こたえを えらんでください!{EOS}"
	.if (. - gText_Rom_5CBB99) > 0xf
	.error "gText_Rom_5CBB99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB99) < 0xf
	.space 0xf - (. - gText_Rom_5CBB99)
	.endif
