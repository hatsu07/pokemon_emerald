	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1112 BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons
	.globl gText_Rom_221755
gText_Rom_221755: @ 0x08221755
	.string "ともだちも\n{STR_VAR_1}と {STR_VAR_2}を\lえらんでいます!"
	.byte EOS
	.if (. - gText_Rom_221755) > 0x17
	.error "gText_Rom_221755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221755) < 0x17
	.space 0x17 - (. - gText_Rom_221755)
	.endif
