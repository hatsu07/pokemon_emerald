	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:307 BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
	.globl gText_Rom_2336E2
gText_Rom_2336E2: @ 0x082336E2
	.string "レベル50と オープンレベルの ゲーム\nどちらに ちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_2336E2) > 0x25
	.error "gText_Rom_2336E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2336E2) < 0x25
	.space 0x25 - (. - gText_Rom_2336E2)
	.endif
