	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:439 BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_227461
gText_Rom_227461: @ 0x08227461
	.string "トレーナーの せんりゃくを ためす ばしょ!\nバトルドームへ ようこそ!\pこちらでは\nシングル バトルトーナメントの\lごあんないを しております$"
	.if (. - gText_Rom_227461) != 0x49
	.error "gText_Rom_227461 must retain its original byte length"
	.endif
