	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1132 BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden
	.globl gText_Rom_221846
gText_Rom_221846: @ 0x08221846
	.string "おめでとう ございます!\nタワータイクーンを たおし\lみごと 7にんぬき されましたね!"
	.byte EOS
	.if (. - gText_Rom_221846) > 0x2d
	.error "gText_Rom_221846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221846) < 0x2d
	.space 0x2d - (. - gText_Rom_221846)
	.endif
