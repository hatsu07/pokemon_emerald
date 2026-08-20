	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:642 BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker
	.globl gText_Rom_227CCA
gText_Rom_227CCA: @ 0x08227CCA
	.string "おめでとう ございます!\pみごと ドームスーパースターを たおし\nバトルトーナメントに\lゆうしょう されましたね!{EOS}"
	.if (. - gText_Rom_227CCA) > 0x3a
	.error "gText_Rom_227CCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227CCA) < 0x3a
	.space 0x3a - (. - gText_Rom_227CCA)
	.endif
