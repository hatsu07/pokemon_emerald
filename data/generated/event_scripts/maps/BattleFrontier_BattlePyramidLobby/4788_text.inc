	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:595 BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	.globl gText_Rom_22CAB5
gText_Rom_22CAB5: @ 0x0822CAB5
	.string "バトルバッグと もたせたどうぐを\nせいりして くだされ!{EOS}"
	.if (. - gText_Rom_22CAB5) > 0x1d
	.error "gText_Rom_22CAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAB5) < 0x1d
	.space 0x1d - (. - gText_Rom_22CAB5)
	.endif
