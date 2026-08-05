	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:501 BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel
	.globl gText_Rom_222508
gText_Rom_222508: @ 0x08222508
	.string "はじめまして……\pぼくの なまえは リラ\nバトルタワーを かんりする もの……\lタワータイクーンだ……\pあなたの うわさは\nいろいろと きいて いるよ\pしょうじき ぼくには みりょくを\nかんじない こと ばかり だけどね……\pぼくが あなたに あいに きた りゆう……\nそれは ただ ひとつ……$"
	.if (. - gText_Rom_222508) > 0x94
	.error "gText_Rom_222508 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222508) < 0x94
	.space 0x94 - (. - gText_Rom_222508)
	.endif
