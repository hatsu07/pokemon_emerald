	@ src/strings.c:992 gText_RentalPkmn2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RentalPkmn2
gText_RentalPkmn2: @ 0x085DBB98
	.string "ポケモンレンタル{EOS}"
	.if (. - gText_RentalPkmn2) != 0x9
	.error "gText_RentalPkmn2 must retain its original byte length"
	.endif

	@ src/strings.c:993 gText_SelectFirstPkmn
	.globl gText_SelectFirstPkmn
gText_SelectFirstPkmn: @ 0x085DBBA1
	.string "1ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_SelectFirstPkmn) > 0x14
	.error "gText_SelectFirstPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_SelectFirstPkmn) < 0x14
	.space 0x14 - (. - gText_SelectFirstPkmn)
	.endif

	@ src/strings.c:994 gText_SelectSecondPkmn
	.globl gText_SelectSecondPkmn
gText_SelectSecondPkmn: @ 0x085DBBB5
	.string "2ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_SelectSecondPkmn) > 0x14
	.error "gText_SelectSecondPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_SelectSecondPkmn) < 0x14
	.space 0x14 - (. - gText_SelectSecondPkmn)
	.endif

	@ src/strings.c:995 gText_SelectThirdPkmn
	.globl gText_SelectThirdPkmn
gText_SelectThirdPkmn: @ 0x085DBBC9
	.string "3ばんめのポケモンを えらんでください{EOS}"
	.if (. - gText_SelectThirdPkmn) > 0x14
	.error "gText_SelectThirdPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_SelectThirdPkmn) < 0x14
	.space 0x14 - (. - gText_SelectThirdPkmn)
	.endif

	@ src/strings.c:996 gText_Rent
	.globl gText_Rent
gText_Rent: @ 0x085DBBDD
	.string "レンタルする{EOS}"
	.if (. - gText_Rent) > 0x7
	.error "gText_Rent may not grow beyond its original slot"
	.endif
	.if (. - gText_Rent) < 0x7
	.space 0x7 - (. - gText_Rent)
	.endif
