	@ src/strings.c:1064 gText_HaventReceivedCardsGift
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C27D9
gText_Rom_2C27D9: @ 0x082C27D9
	.string "   まだ カードの おくりものを もらって\nませんが ほんとうに よみこみますか?$"
	.if (. - gText_Rom_2C27D9) != 0x2b
	.error "gText_Rom_2C27D9 must retain its original byte length"
	.endif
