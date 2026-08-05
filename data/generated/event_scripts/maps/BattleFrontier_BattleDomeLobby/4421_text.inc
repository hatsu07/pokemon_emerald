	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:551 BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2278F7
gText_Rom_2278F7: @ 0x082278F7
	.string "トレーナーの せんりゃくを ためす ばしょ!\nバトルドームへ ようこそ!\pこちらでは\nダブル バトルトーナメントの\lごあんないを しております$"
	.if (. - gText_Rom_2278F7) != 0x48
	.error "gText_Rom_2278F7 must retain its original byte length"
	.endif
