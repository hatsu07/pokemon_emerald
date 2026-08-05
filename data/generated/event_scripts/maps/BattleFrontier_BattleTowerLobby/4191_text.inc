	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1119 BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_221783
gText_Rom_221783: @ 0x08221783
	.string "ともだちと\nえらんだ レベルが ちがいます!\pともだちも\n{STR_VAR_1}を えらんでいます!"
	.byte EOS
	.if (. - gText_Rom_221783) != 0x2a
	.error "gText_Rom_221783 must retain its original byte length"
	.endif
