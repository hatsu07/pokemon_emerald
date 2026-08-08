	@ data/maps/FortreeCity_Gym/scripts.inc:300 FortreeCity_Gym_Text_WinonaPostRematch
	.globl gText_Rom_204B57
gText_Rom_204B57: @ 0x08204B57
	.string "ナギ『たとえ しょうぶに まけても\nこころの つばさが おれて いなければ\lなんどでも うかび あがれる……\pわたしは そう しんじて いますよ!$"
	.if (. - gText_Rom_204B57) > 0x4a
	.error "gText_Rom_204B57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B57) < 0x4a
	.space 0x4a - (. - gText_Rom_204B57)
	.endif
