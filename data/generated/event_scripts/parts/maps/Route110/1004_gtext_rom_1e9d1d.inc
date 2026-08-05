	@ data/maps/Route110/scripts.inc:885 Route110_Text_ChallengeReactionWorst
	.globl gText_Rom_1E9D1D
gText_Rom_1E9D1D: @ 0x081E9D1D
	.string "うむむ…… うむむむ……\pきみには じてんしゃは むいていない かもな\nミスターカゼノに かえしたら どうだね?$"
	.if (. - gText_Rom_1E9D1D) > 0x39
	.error "gText_Rom_1E9D1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9D1D) < 0x39
	.space 0x39 - (. - gText_Rom_1E9D1D)
	.endif
