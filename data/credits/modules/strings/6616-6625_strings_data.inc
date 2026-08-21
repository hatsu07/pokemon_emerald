	@ src/strings.c:992 gText_RentalPkmn2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBB98
gText_Rom_5DBB98: @ 0x085DBB98
	.string "ポケモンレンタル{EOS}"
	.if (. - gText_Rom_5DBB98) != 0x9
	.error "gText_Rom_5DBB98 must retain its original byte length"
	.endif
	.globl gText_Rom_5DBB9C
	.set gText_Rom_5DBB9C, gText_Rom_5DBB98 + 0x4

	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_Rom_5DBBA1
gText_Rom_5DBBA1: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_Rom_5DBBA1) > 0x14
	.error "gText_Rom_5DBBA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBA1) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBA1)
	.endif

	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_Rom_5DBBB5
gText_Rom_5DBBB5: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_Rom_5DBBB5) > 0x14
	.error "gText_Rom_5DBBB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBB5) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBB5)
	.endif

	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_Rom_5DBBC9
gText_Rom_5DBBC9: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_Rom_5DBBC9) > 0x14
	.error "gText_Rom_5DBBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBC9) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBC9)
	.endif

	@ src/strings.c:996 gText_Rent
	.globl gText_Rom_5DBBDD
gText_Rom_5DBBDD: @ 0x085DBBDD
	.string "レンタルする{EOS}"
	.if (. - gText_Rom_5DBBDD) > 0x7
	.error "gText_Rom_5DBBDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBDD) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBDD)
	.endif
