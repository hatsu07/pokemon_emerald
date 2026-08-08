	@ data/maps/RustboroCity/scripts.inc:1049 RustboroCity_Text_MrBrineyWalksInTheTunnel
	.globl gText_Rom_1DF40A
gText_Rom_1DF40A: @ 0x081DF40A
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lときどき トンネルに さんぽに いくんだよ$"
	.if (. - gText_Rom_1DF40A) > 0x32
	.error "gText_Rom_1DF40A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF40A) < 0x32
	.space 0x32 - (. - gText_Rom_1DF40A)
	.endif
