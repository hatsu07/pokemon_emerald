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
