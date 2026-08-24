	@ src/strings.c:860 gJPText_MysteryGift
	.globl gJPText_MysteryGift
gJPText_MysteryGift: @ 0x085CCED5
	.string "ふしぎなもらいもの{EOS}"
	.if (. - gJPText_MysteryGift) > 0xa
	.error "gJPText_MysteryGift may not grow beyond its original slot"
	.endif
	.if (. - gJPText_MysteryGift) < 0xa
	.space 0xa - (. - gJPText_MysteryGift)
	.endif

	@ src/strings.c:861 gJPText_DecideStop
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_DecideStop
gJPText_DecideStop: @ 0x085CCEDF
	.string "{A_BUTTON}けってい {B_BUTTON}やめる{EOS}"
	.if (. - gJPText_DecideStop) != 0xd
	.error "gJPText_DecideStop must retain its original byte length"
	.endif
	.globl gText_Rom_5CCEE6
	.set gText_Rom_5CCEE6, gJPText_DecideStop + 0x7
	.globl gText_Rom_5CCEE8
	.set gText_Rom_5CCEE8, gJPText_DecideStop + 0x9

	@ src/strings.c:862 gJPText_ReceiveMysteryGiftWithEReader
	.globl gJPText_ReceiveMysteryGiftWithEReader
gJPText_ReceiveMysteryGiftWithEReader: @ 0x085CCEEC
	.string "カードeリーダー{PLUS} で\nふしぎなもらいものを よみこみます{EOS}"
	.if (. - gJPText_ReceiveMysteryGiftWithEReader) > 0x1f
	.error "gJPText_ReceiveMysteryGiftWithEReader may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ReceiveMysteryGiftWithEReader) < 0x1f
	.space 0x1f - (. - gJPText_ReceiveMysteryGiftWithEReader)
	.endif
