	@ data/maps/BattleFrontier_Lounge3/scripts.inc:317 BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne
	.globl gText_Rom_238539
gText_Rom_238539: @ 0x08238539
	.string "うふふっ!\nボロもうけ! ボロもうけなのよ!"
	.byte EOS
	.if (. - gText_Rom_238539) > 0x17
	.error "gText_Rom_238539 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238539) < 0x17
	.space 0x17 - (. - gText_Rom_238539)
	.endif
