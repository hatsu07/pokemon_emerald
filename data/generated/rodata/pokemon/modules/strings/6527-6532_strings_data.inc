	@ src/strings.c:860 gJPText_MysteryGift
	.globl gText_Rom_5CCED5
gText_Rom_5CCED5: @ 0x085CCED5
	.string "ふしぎなもらいもの$"
	.if (. - gText_Rom_5CCED5) > 0xa
	.error "gText_Rom_5CCED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCED5) < 0xa
	.space 0xa - (. - gText_Rom_5CCED5)
	.endif

	@ src/strings.c:861 gJPText_DecideStop
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCEDF
gText_Rom_5CCEDF: @ 0x085CCEDF
	.string "{A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_5CCEDF) != 0xd
	.error "gText_Rom_5CCEDF must retain its original byte length"
	.endif
	.globl gText_Rom_5CCEE6
	.set gText_Rom_5CCEE6, gText_Rom_5CCEDF + 0x7
	.globl gText_Rom_5CCEE8
	.set gText_Rom_5CCEE8, gText_Rom_5CCEDF + 0x9

	@ src/strings.c:862 gJPText_ReceiveMysteryGiftWithEReader
	.globl gText_Rom_5CCEEC
gText_Rom_5CCEEC: @ 0x085CCEEC
	.string "カードeリーダー{PLUS} で\nふしぎなもらいものを よみこみます$"
	.if (. - gText_Rom_5CCEEC) > 0x1f
	.error "gText_Rom_5CCEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEEC) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCEEC)
	.endif
