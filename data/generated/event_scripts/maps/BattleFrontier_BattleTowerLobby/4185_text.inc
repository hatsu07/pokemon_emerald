	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1109 BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon
	.globl gText_Rom_221742
gText_Rom_221742: @ 0x08221742
	.string "ともだちも\n{STR_VAR_1}を えらんでいます!"
	.byte EOS
	.if (. - gText_Rom_221742) > 0x13
	.error "gText_Rom_221742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221742) < 0x13
	.space 0x13 - (. - gText_Rom_221742)
	.endif
