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
	.globl gText_Rom_22176C
gText_Rom_22176C: @ 0x0822176C
	.string "ともだちと\nえらんだ レベルが ちがいます!"
	.byte EOS
	.if (. - gText_Rom_22176C) > 0x17
	.error "gText_Rom_22176C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22176C) < 0x17
	.space 0x17 - (. - gText_Rom_22176C)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1119 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221783
gText_Rom_221783: @ 0x08221783
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}を えらんでいます!"
	.byte EOS
	.if (. - gText_Rom_221783) != 0x2a
	.error "gText_Rom_221783 must retain its original byte length"
	.endif
	.globl gText_Rom_22179A
	.set gText_Rom_22179A, gText_Rom_221783 + 0x17
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1123 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons
	.globl gText_Rom_2217AD
gText_Rom_2217AD: @ 0x082217AD
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}と {STR_VAR_2}を\lえらんでいます"
	.byte EOS
	.if (. - gText_Rom_2217AD) > 0x2d
	.error "gText_Rom_2217AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2217AD) < 0x2d
	.space 0x2d - (. - gText_Rom_2217AD)
	.endif
