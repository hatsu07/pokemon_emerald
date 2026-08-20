	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:368 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver (+1 aliases)
	.globl gText_Rom_228786
gText_Rom_228786: @ 0x08228786
	.string "けっしょう しんしゅつ\nおめでとう ございます\pつぎは ドームスーパースター ヒースさまに\nいどむ けっしょうせん です!\pじゅんびの ほうは いかがですか?{EOS}"
	.if (. - gText_Rom_228786) > 0x50
	.error "gText_Rom_228786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228786) < 0x50
	.space 0x50 - (. - gText_Rom_228786)
	.endif
