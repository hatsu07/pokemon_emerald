	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1109 BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon
	.globl BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon: @ 0x08221742
	.string "ともだちも\n{STR_VAR_1}を えらんでいます!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon) > 0x13
	.error "BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon) < 0x13
	.space 0x13 - (. - BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon)
	.endif
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
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1115 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode
	.globl BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode: @ 0x0822176C
	.string "ともだちと\nえらんだ レベルが ちがいます!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode) > 0x17
	.error "BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1119 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon: @ 0x08221783
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}を えらんでいます!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon) != 0x2a
	.error "BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon must retain its original byte length"
	.endif
	.globl gText_Rom_22179A
	.set gText_Rom_22179A, BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon + 0x17
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1123 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons
	.globl BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons: @ 0x082217AD
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}と {STR_VAR_2}を\lえらんでいます"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons) > 0x2d
	.error "BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons)
	.endif
