	@ data/maps/BattleFrontier_Lounge3/scripts.inc:302 BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge
	.globl gText_Rom_2384A4
gText_Rom_2384A4: @ 0x082384A4
	.string "また なんか あったら\nよろしく たのみますよっ!!"
	.byte EOS
	.if (. - gText_Rom_2384A4) > 0x1b
	.error "gText_Rom_2384A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2384A4) < 0x1b
	.space 0x1b - (. - gText_Rom_2384A4)
	.endif
