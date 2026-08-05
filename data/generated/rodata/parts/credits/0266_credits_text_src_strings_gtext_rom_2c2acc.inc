	@ src/strings.c:1094 gText_HaventReceivedGiftOkayToDiscard
	.globl gText_Rom_2C2ACC
gText_Rom_2C2ACC: @ 0x082C2ACC
	.string "おくりものを もらってません\nが ほんとうに すてますか?$"
	.if (. - gText_Rom_2C2ACC) > 0x1e
	.error "gText_Rom_2C2ACC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2ACC) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2ACC)
	.endif
