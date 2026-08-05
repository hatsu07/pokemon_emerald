	@ data/text/tv.inc:40 BattleFrontier_BattleTowerLobby_Text_DifficultToMakeBattleTurnOutAsPlanned
	.globl gText_Rom_24CAE9
gText_Rom_24CAE9: @ 0x0824CAE9
	.string "うーん そうですか……\pおもいどおりに しょうぶを するのって\nなかなか むずかしい ですからね……$"
	.if (. - gText_Rom_24CAE9) > 0x33
	.error "gText_Rom_24CAE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CAE9) < 0x33
	.space 0x33 - (. - gText_Rom_24CAE9)
	.endif
