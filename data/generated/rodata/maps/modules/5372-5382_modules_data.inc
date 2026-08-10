	@ asm/field_specials.s:111 DetermineCyclingRoadResults
	.globl gText_Rom_5CB025
gText_Rom_5CB025: @ 0x085CB025
	.string "かい$"
	.if (. - gText_Rom_5CB025) > 0x3
	.error "gText_Rom_5CB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB025) < 0x3
	.space 0x3 - (. - gText_Rom_5CB025)
	.endif
	@ analyzed canonical ROM range 0x085CB028-0x085CB029
gText_CyclingRoadTimesSuffix: @ 0x085CB028
	.byte 0xB8, 0xFF
	.globl gUnknown_85CB02A
gUnknown_85CB02A: @ 0x085CB02A

	@ src/field_specials.c:175 sText_BigGuy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB02A
gText_Rom_5CB02A: @ 0x085CB02A
	.string "おにいちゃん$"
	.if (. - gText_Rom_5CB02A) != 0x7
	.error "gText_Rom_5CB02A must retain its original byte length"
	.endif
	.globl gText_Rom_5CB02D
	.set gText_Rom_5CB02D, gText_Rom_5CB02A + 0x3
	.globl gUnknown_85CB031
gUnknown_85CB031: @ 0x085CB031

	@ src/field_specials.c:176 sText_BigGirl
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB031
gText_Rom_5CB031: @ 0x085CB031
	.string "おねえちゃん$"
	.if (. - gText_Rom_5CB031) != 0x7
	.error "gText_Rom_5CB031 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB034
	.set gText_Rom_5CB034, gText_Rom_5CB031 + 0x3
	.globl gUnknown_85CB038
gUnknown_85CB038: @ 0x085CB038

	@ src/field_specials.c:177 sText_Son
	.globl gText_Rom_5CB038
gText_Rom_5CB038: @ 0x085CB038
	.string "むすこ$"
	.if (. - gText_Rom_5CB038) > 0x4
	.error "gText_Rom_5CB038 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB038) < 0x4
	.space 0x4 - (. - gText_Rom_5CB038)
	.endif
	.globl gUnknown_85CB03C
gUnknown_85CB03C: @ 0x085CB03C

	@ src/field_specials.c:178 sText_Daughter
	.globl gText_Rom_5CB03C
gText_Rom_5CB03C: @ 0x085CB03C
	.string "むすめ$"
	.if (. - gText_Rom_5CB03C) > 0x4
	.error "gText_Rom_5CB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB03C) < 0x4
	.space 0x4 - (. - gText_Rom_5CB03C)
	.endif
