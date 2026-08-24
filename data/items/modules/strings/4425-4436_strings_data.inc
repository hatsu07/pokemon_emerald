	@ src/strings.c:203 gText_ReturnToVar1
	.globl gText_ReturnToVar1
gText_ReturnToVar1: @ 0x085C9738
	.string "{STR_VAR_1}へ\nもどります{EOS}"
	.if (. - gText_ReturnToVar1) > 0xa
	.error "gText_ReturnToVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnToVar1) < 0xa
	.space 0xa - (. - gText_ReturnToVar1)
	.endif

	@ src/strings.c:207 strings_line_207
	.globl gText_Rom_5C9742
gText_Rom_5C9742: @ 0x085C9742
	.string " ど う ぐ  {EOS}"
	.if (. - gText_Rom_5C9742) > 0x9
	.error "gText_Rom_5C9742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9742) < 0x9
	.space 0x9 - (. - gText_Rom_5C9742)
	.endif

	@ src/strings.c:208 strings_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C974B
gText_Rom_5C974B: @ 0x085C974B
	.string "モンスターボール{EOS}"
	.if (. - gText_Rom_5C974B) != 0x9
	.error "gText_Rom_5C974B must retain its original byte length"
	.endif
	.globl gText_Rom_5C9750
	.set gText_Rom_5C9750, gText_Rom_5C974B + 0x5

	@ src/strings.c:209 strings_line_209
	.globl gText_Rom_5C9754
gText_Rom_5C9754: @ 0x085C9754
	.string " わざマシン  {EOS}"
	.if (. - gText_Rom_5C9754) > 0x9
	.error "gText_Rom_5C9754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9754) < 0x9
	.space 0x9 - (. - gText_Rom_5C9754)
	.endif

	@ src/strings.c:210 strings_line_210
	.globl gText_Rom_5C975D
gText_Rom_5C975D: @ 0x085C975D
	.string " き の み  {EOS}"
	.if (. - gText_Rom_5C975D) > 0x9
	.error "gText_Rom_5C975D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C975D) < 0x9
	.space 0x9 - (. - gText_Rom_5C975D)
	.endif

	@ src/strings.c:211 strings_line_211
	.globl gText_Rom_5C9766
gText_Rom_5C9766: @ 0x085C9766
	.string "たいせつなもの {EOS}"
	.if (. - gText_Rom_5C9766) > 0x9
	.error "gText_Rom_5C9766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9766) < 0x9
	.space 0x9 - (. - gText_Rom_5C9766)
	.endif
