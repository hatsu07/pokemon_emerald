	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:474 BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_227624
gText_Rom_227624: @ 0x08227624
	.string "バトルドームへ ごあんないする まえに\nレポートを かきますが よろしいですか?$"
	.if (. - gText_Rom_227624) != 0x29
	.error "gText_Rom_227624 must retain its original byte length"
	.endif
