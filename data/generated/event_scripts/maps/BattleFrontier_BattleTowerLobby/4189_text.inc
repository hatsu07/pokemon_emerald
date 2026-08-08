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
