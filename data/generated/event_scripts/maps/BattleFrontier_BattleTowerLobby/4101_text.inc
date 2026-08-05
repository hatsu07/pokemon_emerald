	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:989 BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel
	.globl gText_Rom_22086A
gText_Rom_22086A: @ 0x0822086A
	.string "へえ そんな きぶんに なるんだ!\nなかなか こせいてき だね……\pどうも ありがと!"
	.byte EOS
	.if (. - gText_Rom_22086A) > 0x2c
	.error "gText_Rom_22086A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22086A) < 0x2c
	.space 0x2c - (. - gText_Rom_22086A)
	.endif
