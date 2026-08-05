	@ data/text/berries.inc:1 PetalburgCity_Gym_Text_GiveEnigmaBerry
	.globl gText_Rom_2637C2
gText_Rom_2637C2: @ 0x082637C2
	.string "パパ『やあ {PLAYER}!\pめずらしい きのみを てに いれたから\nプレゼント するよ!$"
	.if (. - gText_Rom_2637C2) > 0x29
	.error "gText_Rom_2637C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2637C2) < 0x29
	.space 0x29 - (. - gText_Rom_2637C2)
	.endif
