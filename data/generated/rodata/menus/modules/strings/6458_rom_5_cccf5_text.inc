	@ src/strings.c:821 gText_BerryPickingRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCCF5
gText_Rom_5CCCF5: @ 0x085CCCF5
	.string "ドードリオのきのみどりの きろく$"
	.if (. - gText_Rom_5CCCF5) != 0x11
	.error "gText_Rom_5CCCF5 must retain its original byte length"
	.endif
