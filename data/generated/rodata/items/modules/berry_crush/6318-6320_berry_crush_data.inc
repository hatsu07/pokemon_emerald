	@ asm/berry_crush.s:2144 sub_08021758
	.globl gText_Rom_5CC9C8
gText_Rom_5CC9C8: @ 0x085CC9C8
	.string "1,{COLOR}{0x08}{SHADOW}{0x09}{0xF7}{0x00}{EOS}"
	.if (. - gText_Rom_5CC9C8) > 0xb
	.error "gText_Rom_5CC9C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9C8) < 0xb
	.space 0xb - (. - gText_Rom_5CC9C8)
	.endif
	.space 0x1, 0x00

	@ asm/berry_crush.s:2157 sub_08021758
	.globl gText_Rom_5CC9D4
gText_Rom_5CC9D4: @ 0x085CC9D4
	.string "1,{0xF7}{0x00}{EOS}"
	.if (. - gText_Rom_5CC9D4) > 0x5
	.error "gText_Rom_5CC9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9D4) < 0x5
	.space 0x5 - (. - gText_Rom_5CC9D4)
	.endif
