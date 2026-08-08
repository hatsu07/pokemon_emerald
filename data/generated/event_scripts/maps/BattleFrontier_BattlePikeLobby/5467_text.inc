	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:348 BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
	.globl gText_Rom_2338CC
gText_Rom_2338CC: @ 0x082338CC
	.string "ゲーム しゅうりょう ですね……\pせいせきを レポートに かきましょう……\nしょうしょう おまちください……"
	.byte EOS
	.if (. - gText_Rom_2338CC) > 0x37
	.error "gText_Rom_2338CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2338CC) < 0x37
	.space 0x37 - (. - gText_Rom_2338CC)
	.endif
