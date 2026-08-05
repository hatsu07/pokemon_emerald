	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:401 BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2315C2
gText_Rom_2315C2: @ 0x082315C2
	.string "おまちしておりましたよ!\pちょうせんを さいかいする まえに\nレポートを かきます!"
	.byte EOS
	.if (. - gText_Rom_2315C2) != 0x2b
	.error "gText_Rom_2315C2 must retain its original byte length"
	.endif
