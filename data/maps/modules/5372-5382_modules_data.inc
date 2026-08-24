
	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl sText_Sec_Copy_BerryBlender
sText_Sec_Copy_BerryBlender: @ 0x085CB021
	.string "びょう{EOS}"
	.if (. - sText_Sec_Copy_BerryBlender) > 0x4
	.error "sText_Sec_Copy_BerryBlender may not grow beyond its original slot"
	.endif
	.if (. - sText_Sec_Copy_BerryBlender) < 0x4
	.space 0x4 - (. - sText_Sec_Copy_BerryBlender)
	.endif

	@ asm/field_specials.s:111 DetermineCyclingRoadResults
	.globl gText_Rom_5CB025
gText_Rom_5CB025: @ 0x085CB025
	.string "かい{EOS}"
	.if (. - gText_Rom_5CB025) > 0x3
	.error "gText_Rom_5CB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB025) < 0x3
	.space 0x3 - (. - gText_Rom_5CB025)
	.endif
	@ analyzed canonical ROM range 0x085CB028-0x085CB029
gText_CyclingRoadTimesSuffix: @ 0x085CB028
	.byte 0xB8, 0xFF

	@ src/field_specials.c:175 sText_BigGuy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_BigGuy
sText_BigGuy: @ 0x085CB02A
	.string "おにいちゃん{EOS}"
	.if (. - sText_BigGuy) != 0x7
	.error "sText_BigGuy must retain its original byte length"
	.endif

	@ src/field_specials.c:176 sText_BigGirl
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_BigGirl
sText_BigGirl: @ 0x085CB031
	.string "おねえちゃん{EOS}"
	.if (. - sText_BigGirl) != 0x7
	.error "sText_BigGirl must retain its original byte length"
	.endif

	@ src/field_specials.c:177 sText_Son
	.globl sText_Son
sText_Son: @ 0x085CB038
	.string "むすこ{EOS}"
	.if (. - sText_Son) > 0x4
	.error "sText_Son may not grow beyond its original slot"
	.endif
	.if (. - sText_Son) < 0x4
	.space 0x4 - (. - sText_Son)
	.endif

	@ src/field_specials.c:178 sText_Daughter
	.globl sText_Daughter
sText_Daughter: @ 0x085CB03C
	.string "むすめ{EOS}"
	.if (. - sText_Daughter) > 0x4
	.error "sText_Daughter may not grow beyond its original slot"
	.endif
	.if (. - sText_Daughter) < 0x4
	.space 0x4 - (. - sText_Daughter)
	.endif
