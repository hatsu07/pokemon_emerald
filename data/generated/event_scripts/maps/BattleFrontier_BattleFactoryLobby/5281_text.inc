	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:401 BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2315C2
gText_Rom_2315C2: @ 0x082315C2
	.string "おまちしておりましたよ!\pちょうせんを さいかいする まえに\nレポートを かきます!"
	.byte EOS
	.if (. - gText_Rom_2315C2) != 0x2b
	.error "gText_Rom_2315C2 must retain its original byte length"
	.endif
	.globl gText_Rom_2315CF
	.set gText_Rom_2315CF, gText_Rom_2315C2 + 0xd
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:406 BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting
	.globl gText_Rom_2315ED
gText_Rom_2315ED: @ 0x082315ED
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しません でしたね!\pざんねんですが\nちょうせんは むこうと なります!"
	.byte EOS
	.if (. - gText_Rom_2315ED) > 0x4a
	.error "gText_Rom_2315ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2315ED) < 0x4a
	.space 0x4a - (. - gText_Rom_2315ED)
	.endif
