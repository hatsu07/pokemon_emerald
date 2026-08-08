	@ data/maps/BattleFrontier_Lounge3/scripts.inc:200 BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere
	.globl gText_Rom_237972
gText_Rom_237972: @ 0x08237972
	.string "…… なんだぁ?\pおれたちゃ いま いそがしいの!\nまた こんどに してくれや!"
	.byte EOS
	.if (. - gText_Rom_237972) > 0x29
	.error "gText_Rom_237972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237972) < 0x29
	.space 0x29 - (. - gText_Rom_237972)
	.endif
