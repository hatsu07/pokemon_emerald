	@ data/text/berries.inc:56 Route120_Text_YesYouUnderstand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2639DA
gText_Rom_2639DA: @ 0x082639DA
	.string "うん うん!\nやっぱ わかるひとには わかるよね\pこれ あげる$"
	.if (. - gText_Rom_2639DA) != 0x20
	.error "gText_Rom_2639DA must retain its original byte length"
	.endif
