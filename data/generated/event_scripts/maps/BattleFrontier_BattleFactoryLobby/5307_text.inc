	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:495 BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints
	.globl gText_Rom_23198B
gText_Rom_23198B: @ 0x0823198B
	.string "ここの スタッフさぁ たたかいの まえに\nつぎに たたかう トレーナーのこと\lちょっとだけ おしえて くれるだろー?\pでも オレ いい おとな なのに\nあいつらの せつめいの いみが\lぜんぜん わからないんだ よう"
	.byte EOS
	.if (. - gText_Rom_23198B) > 0x6c
	.error "gText_Rom_23198B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23198B) < 0x6c
	.space 0x6c - (. - gText_Rom_23198B)
	.endif
