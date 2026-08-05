	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:947 BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom
	.globl gText_Rom_220659
gText_Rom_220659: @ 0x08220659
	.string "…あら どうぐが いっぱいですね\pどうぐを せいりしてから\nまたおこしください"
	.byte EOS
	.if (. - gText_Rom_220659) > 0x28
	.error "gText_Rom_220659 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220659) < 0x28
	.space 0x28 - (. - gText_Rom_220659)
	.endif
